#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    bool isTrue = false;
    sort(arr.begin(),arr.end());
    auto upb = upper_bound(arr.begin(),arr.end(),k);
    for(auto it = arr.begin();it!=upb;it++){
        int k_bro = k - (*it);
        if(binary_search(arr.begin(),upb,k_bro)){
            isTrue = true;
            break;
        }
        
    }
    if(isTrue){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}
