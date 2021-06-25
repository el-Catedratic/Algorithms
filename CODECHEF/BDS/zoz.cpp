#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        int sum = 0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
            sum += temp;
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if((sum - 2*arr[i]) < k){
                count++;
            }
        }

        cout<<count<<"\n";
    }
    return 0;
}