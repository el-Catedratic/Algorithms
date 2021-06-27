#include<bits/stdc++.h>

using namespace std;

int n,m;

bool isSafe(int i,int j,int** arr){
    if(((i>=0 && j>=0) && (i<n && j<m)) && (arr[i][j]!=-1)) return true;
    else return false; 
}

void bfs(int i,int j,int** arr,int** res,int** vis){
    queue<pair<int,int>> q;
    q.push(make_pair(i,j));
    res[i][j] = arr[i][j];
    //vis[i][j] = 1;
    while(!q.empty()){
        int k = q.front().first;
        int l = q.front().second;
        vis[k][l] = 1;
        if(res[k][l] == 0){
            q.pop(); 
            break;
        }
        else{
            if((vis[k-1][l] !=1) && (isSafe(k-1,l,arr))){
                res[k-1][l] == res[k][l]-1;
                q.push(make_pair(k-1,l));
            }
            if((vis[k+1][l] !=1) && (isSafe(k+1,l,arr))){
                res[k+1][l] == res[k][l]-1;
                q.push(make_pair(k+1,l));
            }
            if((vis[k][l-1] !=1) && (isSafe(k,l-1,arr))){
                res[k][l-1] == res[k][l]-1;
                q.push(make_pair(k,l-1));
            }
            if((vis[k][l+1] !=1) && (isSafe(k,l+1,arr))){
                res[k][l+1] == res[k][l]-1;
                q.push(make_pair(k,l+1));
            }
            q.pop();
        }
        
    }
}

void labyrinth(int** arr,int n,int m){
    int** res = new int*[n];
    for(int i=0;i<n;i++){
        int* temp = new int[m]();
        res[i] = temp;
    }
    int** vis = new int*[n];
    for(int i=0;i<n;i++){
        int* temp = new int[m]();
        vis[i] = temp;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] != -1 || arr[i][j]!=0){
                bfs(i,j,arr,res,vis);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(res[i][j] == -1){
                cout<<"B"<<" ";
            }
            else if(arr[i][j] == 0){
                cout<<"N"<<" ";
            } 
            else{
                cout<<"Y"<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int** arr = new int*[n];
        for(int i=0;i<n;i++){
            int* temp = new int[m]();
            arr[i] = temp;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        labyrinth(arr,n,m);
       //isSafe(0,0,arr);
    }
    return 0;
}

