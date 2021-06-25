#include<bits/stdc++.h>

using namespace std;

long long int SumOfPrimes(int n){
    long long int sum = 0;
    vector<bool> arr(n+1,true);
    for(int i = 2;i*i<=n;i++){
        int temp = arr[i];
        if(temp){
            for(int j = i*i;j<=n;j+=i){
                arr[j] = false;
            }
        }
    }
    for(int i = 2;i<=n;i++){
        if(arr[i] == true){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<SumOfPrimes(n)<<endl;
    }
    return 0;
}