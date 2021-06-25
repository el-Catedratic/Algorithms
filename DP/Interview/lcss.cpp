#include<bits/stdc++.h>

using namespace std;

int lcs(string s,string t){
    int m = s.length();
    int n = t.length();
    int **arr = new int*[m+1];
    for(int i=0;i<=m;i++){
        int* temp = new int[n+1]();
        arr[i] = temp;
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                continue;
            }
            else{
                if(s[i-1] == t[j-1]){
                    arr[i][j] = 1 + arr[i-1][j-1];
                    // cout<<s[i-1]<<" ";
                }
                else{
                    arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
    }
    int i = m;
    int j = n;
    while((i!=0 || j!=0) && (arr[i][j]!=0)){
        if(arr[i][j] == max(arr[i-1][j],arr[i][j-1])){
            if(arr[i-1][j] > arr[i][j-1]) i--;
            else j--;
        }
        else{
            cout<<s[i-1]<<" ";
            i--;
            j--;
        }
    }
    return arr[m][n];
}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int res = lcs(s,t);
    cout<<res<<endl;
    return 0;
}