#include<bits/stdc++.h>

using namespace std;

int lis(int** arr,int size){
    for(int i=0;i<size;i++) arr[1][i] = 1;
    for(int i = 1;i<size;i++){
        for(int j = 0;j<i;j++){
            if(arr[0][j]<arr[0][i]){
                arr[1][i] = max(arr[1][i],1+arr[1][j]);
            }
        }
    }
    int res = INT_MIN;
    for(int i=0;i<size;i++){
        if(res < arr[1][i]) res = arr[1][i];
    }
    return res;
}

int main(){

    int n;
    cin>>n;
    int** arr = new int*[2];
    for(int i=0;i<2;i++){
        int* temp = new int[n]();
        arr[i] = temp;
    }
    for(int i=0;i<n;i++){
        cin>>arr[0][i];
    }
    int res = lis(arr,n);
    cout<<res<<endl;
    return 0;
}