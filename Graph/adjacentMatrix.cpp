#include <bits/stdc++.h>
using namespace std;

int main() {

    int vertex, edges;
    std::cout<<"Write number of vertices and edges: ";
    cin >> vertex >> edges;
    vector<vector<int>>adjacentMatrix(vertex, vector<int>(vertex, 0));
    int u,v, weight;
    std::cout<<"Which two vertices are connected?(With weight)"<<std::endl;
    for(int i=0; i<edges; i++)
    {
        cin >> u >> v >> weight;
        adjacentMatrix[u][v] = weight;
        adjacentMatrix[v][u] = weight;
    }
    std::cout<<"Your Adjacent Matrix:"<<std::endl;
    for(int i=0; i < adjacentMatrix.size(); i++){
        for(int j=0; j < adjacentMatrix[0].size(); j++){
            std::cout<<adjacentMatrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}