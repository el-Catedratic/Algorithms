#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,q;
        cin>>n>>q;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            arr.push_back(p);
        }
        vector<int> pre;
        vector<int> suff;
        pre.push_back(arr[0]);
        for(int i=1;i<=n-1;i++){
            int temp =  gcd(pre[i-1],arr[i]);
            pre.push_back(temp);
        }
        suff.push_back(arr[n-1]);
        for(int i = n-2;i>=0;i--){
            int temp = gcd(suff[n-i-2],arr[i]);
            suff.push_back(temp);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            if(l==1){
                cout<<suff[n-r-1]<<endl;
            }
            else if(r==n){
                cout<<pre[l-2]<<endl;
            }
            else{
                cout<<gcd(pre[l-2],suff[n-r-1])<<endl;
            }
        }
    }
    return 0;
}