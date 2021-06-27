#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_set<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.insert(temp);
        }
        int sum_p = 0;
        int sum_n = 0;
        for(auto elm : arr){
            if(elm >=0){
                sum_p += elm;
            }
            else{
                sum_n += elm;
            }
        }
        cout<<sum_p<<" "<<sum_n<<"\n";
    }
    return 0;
}