#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pi;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            int div = temp/p;
            int rem = temp%p;
            if(rem!=0) div++;
            pq.push(make_pair(div,i+1));
        }
        for(int i =0;i<n;i++){
            cout<<pq.top().second<<" ";
            pq.pop();
        }
        cout<<endl;
    }
    return 0;
}