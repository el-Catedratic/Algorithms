#include<bits/stdc++.h>
using namespace std;


int possways(int *ans , int n, int arr[],int k){
    for (int i=1; i<=n; i++){ 
        ans[i] = INT_MAX;  
    }
    ans[0] = 0;
    sort(arr,arr + k);

    if(arr[0]>n){
        ans[n] = -1;
    }
    else{
    
        for(int i = 1;(i<arr[0]);i++){
            ans[i] = -1;
        }
        for(int i = arr[0];i<=n;i++){
            for(int j = 0;j<k;j++){
                if(i<arr[j]){
                    break;
                }
                else{
                    if(ans[i - arr[j]] == -1){
                        if(j == k-1 && ans[i] == INT_MAX){
                            ans[i] = -1;
                        }
                        else{
                            continue;
                        }
                    }
                    else{
                        ans[i] = min(ans[i] - 1,ans[i - arr[j]]) + 1;
                    }
                    
                }
            }
        }
    }
    int res = ans[n];
    return res;
}

int main(){
    int k,n;
    cin>>k>>n;
    int arr[k];
    for(int i =0 ;i<k;i++){
        cin>>arr[i];
    }
    int ans[n+1];
    ans[0] = 0;
    int res = possways(ans,n,arr,k);
    cout<<res<<endl;
    return 0;
}