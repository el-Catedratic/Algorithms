#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;

    unordered_map<string,list<pair<string,int>>> l;

    public:
        void Addedge(string x,string y,bool bidr,int wt){
            l[x].push_back(make_pair(y,wt));
            if(bidr){
                l[y].push_back(make_pair(x,wt));
            }
        }

        void PrintEdge(){
            for(auto it:l){
                string city = it.first;
                list<pair<string,int>> nbrs = it.second;
                cout<<city<<"->";
                for(auto nbr:nbrs){
                    string dest = nbr.first;
                    int dist = nbr.second;
                    cout<<dest<<" "<<dist<<",";
                }
                cout<<endl;
            }
        }
};
int main(){
    Graph g;
    g.Addedge("A","B",true,3);
    g.Addedge("B","D",true,40);
    g.Addedge("A","c",true,10);
    g.PrintEdge();
}