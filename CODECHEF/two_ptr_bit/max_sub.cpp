#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            arr.push_back(p);
        }
        stack<int> pos;
        int pos_cnt = 0;
        for(int i : arr){
            if(i>0){
                pos.push(i);
                pos_cnt++;
            }
        }
        if(pos_cnt){
            vector<int> final;
            int k = 0;
            while(arr[k]<=0){
                k++;
            }
            int l = 1;
            while((l!=k) && (!pos.empty())){
                final.push_back(pos.top());
                pos.pop();
                l++;
            }
            if(k<=(n-1)){
                final.push_back(arr[k]);
            }
            
            while(!pos.empty()){
                if(arr[k]<=0){
                    final.push_back(pos.top());
                    pos.pop();
                }
                else{
                    final.push_back(arr[k]);
                }
                k++;
            }
            cout<<accumulate(final.begin(),final.end(),0)<<endl;
            cout<<final.size()<<" ";
            for(int i : final){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"0"<<endl;
            cout<<"0"<<endl;
        }
    }
    return 0;
}