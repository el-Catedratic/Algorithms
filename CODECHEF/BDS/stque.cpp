#include<bits/stdc++.h>

using namespace std;

class Stack{
    public:
        queue<int> q1,q2;

        Stack(){
            q1 = queue<int>();
            q2 = queue<int>();
        }

        void push(int x){
            q1.push(x);
        }

        void pop(){
            if(!(q1.empty())){
                while(q1.size()!=1){
                    q2.push(q1.front());
                    q1.pop();
                }
                q1.pop();
            }
            queue<int> temp;
            temp = q1;
            q1 = q2;
            q2 = temp;
        }

        void top(){
            if(!(q1.empty())){
                while(q1.size()!=1){
                    q2.push(q1.front());
                    q1.pop();
                }
                cout<<q1.front()<<endl;
                q2.push(q1.front());
                q1.pop();
            }
            queue<int> temp;
            temp = q1;
            q1 = q2;
            q2 = temp;
        }
};

int main(){
    int q;
    cin>>q;
    Stack s;
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