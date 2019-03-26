#include <bits/stdc++.h>

struct Node {
    int id;
    std::vector<int> adjNode;
};

struct Graph {
    std::vector<node> nodes; 
};

void AddNode(Graph& g) {
    Node point;
    point.id = g.nodes.size();
    g.nodes.push_back(point);
}

void addNode(Graph& g, int count) {
    for(int i=0; i<count; i++) {
        Node point; 
        point.id = i;
        g.nodes.push_back();
    }
}


void dfs(int s) {
    if(visited[s]) return;
    visited[s] = true;
    for (auto u: adj[s] {
        dfs[u];
    })
} 
 int main () {
     Graph pulau;
     pulau.nodes[];
 }