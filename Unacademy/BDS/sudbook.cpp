#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    stack<int> stk;
    while(q--){
        int qn;
        cin>>qn;
        if(qn == -1){
            if(stk.empty()){
                cout<<"kuchbhi?"<<endl;
            }
            else{
                cout<<stk.top()<<endl;
                stk.pop();
            }
        }
        else{
            int n;
            cin>>n;
            stk.push(n);
        }
    }
    return 0;
}