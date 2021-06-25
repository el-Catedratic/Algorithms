#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        stack<char> stk;
        for(char i : s){
            if(stk.empty()) stk.push(i);
            else{
                if(stk.top() == i) stk.pop();
                else stk.push(i);
            }
        }
        cout<<stk.size()<<endl;
    }
    return 0;
}