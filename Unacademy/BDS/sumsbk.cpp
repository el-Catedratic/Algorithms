#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        int sum = 0;
        unordered_map<int,int> tp;
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            int p,diff;
            cin>>p;
            sum += p;
            if(sum == 0){
                if(i > mx){
                    mx = (i + 1);
                }
            }
            else if(tp.find(sum) != tp.end()){
                diff = i - (tp[sum]);
                if( (diff) > mx){
                    mx = diff;
                }
            }
            else{
                tp[sum] = i;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}