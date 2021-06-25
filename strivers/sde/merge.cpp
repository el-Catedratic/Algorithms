#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> A;
    for(int i=0;i<(n+m);i++){
        int p;
        cin>>p;
        A.push_back(p);
    }
    int gap = ceil((n+m)/2);
    int i=0;
    int j=i+(gap - 1);
    while(gap>=1){
        while(i<n && j<n){
            if(A[j] < A[i]){
                swap(A[j],A[i]);
            }
            i++;
            j++;
        }
        gap = ceil(gap/2);
    }
    for(int i=0;i<(n+m);i++){
        cout<<A[i]<<endl;
    }
    return 0;
}