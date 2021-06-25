#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    unordered_map<string,int> count;
    while(t!=0){
        string s;
        cin>>s;
        if(count.find(s)!= count.end()){
            count[s]++;
            cout<<s+to_string(count[s])<<endl;
        }
        else{
            count[s] = 0;
            cout<<"OK"<<endl;
        }
       t--; 
    }
    return 0;
}

