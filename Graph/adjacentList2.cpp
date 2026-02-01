#include <bits/stdc++.h>
using namespace std;

int main() {

    int vertex, edges;
    std::cout<<"Write number of vertices and edges: ";
    cin >> vertex >> edges;
    vector<unordered_map<int, int>> adjacentList(vertex);
    std::cout<<"Which two vertices are connected?(With weight)"<<std::endl;
    
    int u,v, weight;
    for(int i=0; i < edges; i++)
    {
        cin >> u >> v >> weight ;
        adjacentList[u][v] = weight;
        adjacentList[v][u] = weight;
    }
    std::cout<<"Your Adjacent Matrix:"<<std::endl;
    for(int i=0; i < vertex; i++){
        for(int j=0; j < adjacentList[i].size(); j++){
            std::cout<<i<<" -> "<<adjacentList[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}