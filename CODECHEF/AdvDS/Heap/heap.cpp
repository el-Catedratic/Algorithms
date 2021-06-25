#include<bits/stdc++.h>

using namespace std;

void upHeapify(vector<int> &heap,int i){
    int par = (i-1)/2;
    if(i == 0){
        return;
    }
    if(heap[par] < heap[i]){
        swap(heap[par],heap[i]);
        upHeapify(heap,par);
    }
    else{
        return;
    }
}

void DownHeapify(vector<int> &heap,int val){
    int lc = 2*val;
    int rc = 2*val + 1;
    if(lc > heap.size() -1 && rc > heap.size()-1){
        return;
    }
    if((lc < heap.size()-1) && (heap[lc] > heap[val])){
        swap(heap[lc],heap[val]);
        DownHeapify(heap,lc);
    }
    if((rc < heap.size()-1) && heap[rc] > heap[val]){
        swap(heap[rc],heap[val]);
        DownHeapify(heap,rc);
    }
    return;
}

void insert(vector<int> &heap,int val){
    heap.push_back(val);
    upHeapify(heap,heap.size()-1);
}

void pop(vector<int> &heap,int val){
    swap(heap[val],heap[heap.size()-1]);
    heap.pop_back();
    DownHeapify(heap,val);
}

int top(vector<int> &heap){
    if(heap.size() == 0){
        return INT32_MAX;
    }
    return heap[0];
}

int main(){
    int n;
    cin>>n;
    vector<int> heap;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        insert(heap,temp);
    }

    cout<<top(heap);
    for(int i : heap){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}