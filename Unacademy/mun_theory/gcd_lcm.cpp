#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int res,lcm;
        if(a>=b){
            res = gcd(a,b);
        }
        else
        {
            res = gcd(b,a);
        }
        res = gcd(a,b);
        lcm = (a*b)/res;
        cout<<res<<" "<<lcm<<endl;
    }
    return 0;
}