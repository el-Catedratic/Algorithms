#include<bits/stdc++.h>

using namespace std;

class Queue{
    public:
        stack<int> s1;
        stack<int> s2;

        Queue(){
            s1 = stack<int>();
            s2 = stack<int>();
        }

        void push(int x){
            s1.push(x);
        }

        void top(){
            while(!(s1.empty())){
                s2.push(s1.top());
                s1.pop();
            }
            cout<<s2.top()<<endl;
            while(!(s2.empty())){
                s1.push(s2.top());
                s2.pop();
            }
        }

        void pop(){
            while(!(s1.empty())){
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
            while(!(s2.empty())){
                s1.push(s2.top());
                s2.pop();
            }
        }
};

int main(){
    int q;
    cin>>q;
    Queue s;
    while(q--){
        int cs;
        cin>>cs;
        switch (cs)
        {
        case 1:
            int x;
            cin>>x;
            s.push(x);
            break;
        case 2:
            s.pop();
            break;
        default:
            s.top();
            break;
        }
    }
    return 0;
}