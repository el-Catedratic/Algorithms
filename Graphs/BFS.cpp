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
        void BFS(T src){
            map<T,int> visited;
            queue<T> q;

            q.push(src);
            visited[src] = 1;
            while(!q.empty()){
                T node = q.front();
                q.pop();
                cout<<node<<" ";
                for(T nbr:l[node]){
                    if(!visited[nbr]){
                        q.push(nbr);
                        visited[nbr] = 1;
                    }
                }
            }
            cout<<endl;
        }

};

int main(){
    Graph<int> g;
    g.AddEdge(1,3);
    g.AddEdge(2,1);
    g.AddEdge(3,2);
    g.BFS(1);
    return 0;
}