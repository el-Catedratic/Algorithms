#include<bits/stdc++.h>
using namespace std;


class Graph{
    int V;
    list<int> *l;
    public:
        Graph(int V){
            this->V = V;
            l = new list<int>[V];
        }

        void AddEdge(int x,int y){
            l[x].push_back(y);
            l[y].push_back(x);
        }

        void PrintEdge(){
            for(int i=0;i<V;i++){
                cout<<"VERTEX"<<i<<"->";
                for(int nbr:l[i]){
                    cout<<nbr<<" ";
                }
            }
            cout<<endl;
        }
};
int main(){
    Graph g(4);
    g.AddEdge(0,1);
    g.AddEdge(0,2);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.PrintEdge();

    return 0;
}