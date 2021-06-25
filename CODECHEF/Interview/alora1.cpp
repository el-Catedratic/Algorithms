#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int len = n;
        set<int> s;
        while(n!=0){
            int temp;
            cin>>temp;
            s.insert(temp);
            n--;
        }
        if(s.size()!=len){
            cout<<"ne krasivo"<<endl;
        }
        else{
            cout<<"prekrasnyy"<<endl;
        }
        t--;
    }
    return 0;
}