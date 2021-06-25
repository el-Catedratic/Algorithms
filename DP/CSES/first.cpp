/*Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and 6.
*/
#include<bits/stdc++.h>
using namespace std;


long long int diceSum(int arr[],int n,long long int ans[]){
    int mod = 1000000007;
    for(int i = 2;i<=n;i++){
        long long int sum = 0;
        for(int j = 0;j<6;j++){
            if(i == arr[j]){
                (ans[i] = ans[i] + 1);
            }
            else if(i > arr[j]){
                sum = (sum%mod) + (ans[i - arr[j]]%mod);
                ans[i] = sum;
            }
            else{
                break;
            }
            
        }
    }
    long long int app = ans[n];
    app = app % mod;
    return app;
}

int main(){
    int n;
    cin>>n;
    int arr[6] = {1,2,3,4,5,6};
    long long int ans[n+1];
    ans[0] = 0;
    ans[1] = 1;
    long long int res;
    res = diceSum(arr,n,ans);
    cout<<res<<endl;
    return 0;   
}