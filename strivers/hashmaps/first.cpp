#include<bits/stdc++.h>
using namespace std;
int main(){
        string s;
        getline(cin,s);
        map<char,int> count;
        for(int i=0;i<s.length();i++){
            if(count.find(s[i])!=count.end()){
                count[s[i]]++;
            }
            else{
                count[s[i]] = 1;
            }
        }
        char max = (count.begin()->first);
        for(auto it = count.begin();it!=count.end();it++){
            if((it->second)>count[max]){
                max = it->first;
            }
        }
        cout<<max<<" "<<count[max]<<endl;
    return 0;
}