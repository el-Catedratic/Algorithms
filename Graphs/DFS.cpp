#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Graph{
    map<T,list<T>> l ;

    public:
        void AddEdge(T x,T y){
            l[x].push_back(y);
            l[y].push_back(x);
        }
        void DFS_helper(T src,map<T,bool> &visited){
            cout<<src<<" ";
            visited[src] = true;
            for(T it:l[src]){
                if(!visited[it]){
                    DFS_helper(it,visited);
                }
            }
        }
        void DFS(T src){
            map<T,bool> visited;
            for(auto p:l){
                T node = p.first;
                visited[node] = false;
            }
            DFS_helper(src,visited);
        }

};
int main(){
    Graph<int> g;
    g.AddEdge(1,3);
    g.AddEdge(2,1);
    g.AddEdge(3,2);
    g.AddEdge(4,5);
    g.AddEdge(3,4);
    g.AddEdge(5,2);
    g.DFS(1);
    return 0;
}        