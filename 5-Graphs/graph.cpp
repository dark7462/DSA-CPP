#include <bits/stdc++.h>
using namespace std;
void Undirected_Graph_Weighted(){
    // code for unDirected Graph
    // non weighted (Or weight of 1)
    int n, m; cin >> n >> m;
    int mat[n+1][n+1] = {0}; // space O(n*n)
    for(int i = 0; i < m ; i++){
        int u, v, w; cin >> u >> v >> w; // store the weight in the matrix values it self
        mat[u][v] = w;
        mat[v][u] = w;
    }
    // Better way of storing
    int n, m; cin >> n >> m;
    vector<pair<int,int>> adj[n+1]; // space O(2*n)
    for(int i = 0 ; i < m ; i++){
        int u, v, w; cin >> u >> v >> w; // store the weights as pairs for the following index
        adj[u].emplace_back(v,w); // either use emplace back or can push_back({v,w})
        adj[v].emplace_back(u,w);
    }
}
void Undirected_Graph_UnWeighted(){
    // code for unDirected Graph
    // weighted (Or weight of 1)
    int n, m; cin >> n >> m;
    int mat[n+1][n+1] = {0}; // space O(n*n)
    for(int i = 0; i < m ; i++){
        int u , v; cin >> u >> v ;
        mat[u][v] = 1;
        mat[v][u] = 1;
    }
    // Better way of storing
    int n, m; cin >> n >> m;
    vector<int> adj[n+1]; // space O(2*n)
    for(int i = 0 ; i < m ; i++){
        int u , v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void Directed_Graph_Weighted(){
    // code for unDirected Graph
    // non weighted (Or weight of 1)
    int n, m; cin >> n >> m;
    int mat[n+1][n+1] = {0}; // space O(n*n)
    for(int i = 0; i < m ; i++){
        int u, v, w; cin >> u >> v >> w; // store the weight in the matrix values it self
        mat[u][v] = w; // only one way connection
    }
    // Better way of storing
    int n, m; cin >> n >> m;
    vector<pair<int,int>> adj[n+1]; // space O(2*n)
    for(int i = 0 ; i < m ; i++){
        int u, v, w; cin >> u >> v >> w; // store the weights as pairs for the following index
        adj[u].emplace_back(v,w); // either use emplace back or can push_back({v,w})
        // only one way connection
    }
}
void Directed_Graph_UnWeighted(){
    // code for unDirected Graph
    // weighted (Or weight of 1)
    int n, m; cin >> n >> m;
    int mat[n+1][n+1] = {0}; // space O(n*n)
    for(int i = 0; i < m ; i++){
        int u , v; cin >> u >> v ;
        mat[u][v] = 1; // only one way connection
    }
    // Better way of storing
    int n, m; cin >> n >> m;
    vector<int> adj[n+1]; // space O(2*n)
    for(int i = 0 ; i < m ; i++){
        int u , v; cin >> u >> v;
        adj[u].push_back(v); // one way connection
    }
}
int main(){
    // Graph is a non-Linear data struture having edges and vertices
    // There are 2 types of Graphs
    // Undirected Graph = u -> v and v -> u
    // Directed Graph = u -> v

    Undirected_Graph_UnWeighted();
    Undirected_Graph_Weighted();
    Directed_Graph_UnWeighted();
    Directed_Graph_Weighted();

    // give inputs and use them as you want
    
    return 0;
}