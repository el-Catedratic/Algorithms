#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pi;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>n>>k;
        priority_queue<pi> pq;
        int mn = 0;
        int mx = k-1;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            pq.push(make_pair(temp,i));
            if(i < k){
                if(i==(k-1)){
                    cout<<pq.top().first<<" ";
                }
            }
            else{
                //cout<<"else1"<<endl;
                mn++;
                mx++;
                int tp = pq.top().second;
                //cout<<tp<<" "<<mn<<" "<<mx<<endl;
                while((tp<mn) && (!pq.empty())){
                    pq.pop();
                    if(!(pq.size() == 0)) tp = pq.top().second;
                }
                if(!pq.empty()) cout<<pq.top().first<<" ";
                else break;
            }
        }
        cout<<endl;
    }
    return 0;
}