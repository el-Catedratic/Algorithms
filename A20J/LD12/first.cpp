#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    }
    int min = arr.front();
    int max = arr.front();

    for(int i=0;i<arr.size();i++){
        if(arr[i] <= min){
            min = i;
            cout<<min<<" ";
        }
        
    }
    for(int i=0;i<arr.size();i++){
        
        if(arr[i]>max){
            max = i;
            cout<<max<<endl;
        }
    }
    int diff = 0;
    if(max == 0 && min == arr.size()-1){
        cout<<"0"<<endl;
    }
    else{
        if(min>max){
        diff += arr.size() - min -1;
        diff += max;
    }
    else{
        diff += arr.size() - min -1;
        diff += (max -1);
    }
    }
    
    return 0;
}