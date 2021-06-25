#include<bits/stdc++.h>

using namespace std;

int trisq(int base,int squares){
    while(base > 2){
        squares += (base-2)/2;
        base = base - 2;
    }
    return squares;
}

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int base;
        cin>>base;
        cout<<trisq(base,0)<<endl;

        t--;
    }
    return 0;
}