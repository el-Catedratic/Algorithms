#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> prefix;
        int n;
        cin>>n;
        prefix.push_back(0);
        int sum = 0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            sum += temp;
            prefix.push_back(sum);
        }
        int q;
        cin>>q;
        while(q--){
            int start,end;
            cin>>start>>end;
            int ans = prefix[end] - prefix[start-1];
            cout<<ans<<"\n";
        }
    }
    return 0;
}