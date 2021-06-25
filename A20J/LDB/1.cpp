/*During the break the schoolchildren, boys and girls, formed a queue of n people in the canteen. Initially the children stood in the order they entered the canteen. However, after a while the boys started feeling awkward for standing in front of the girls in the queue and they started letting the girls move forward each second.

Let's describe the process more precisely. Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, at that the person in the position number 1 is served first. Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

You've got the initial position of the children, at the initial moment of time. Determine the way the queue is going to look after t seconds.*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    vector<char> arr;
    for(int i=0;i<n;i++){
        arr.push_back(str[i]);
    }
    while(t!=0){
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 'B' && arr[i+1] == 'G'){
                int temp;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                i++;
            }
        }
        t--;
    }
    for(auto it = arr.begin();it!=arr.end();it++){
        cout<<*it;
    }
    cout<<endl;
    return 0;
}
