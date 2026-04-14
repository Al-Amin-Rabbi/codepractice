#include <bits/stdc++.h>
const int MAX = 1000; // Maximum number of vertices
int V; // Number of vertices
int Adjacency_Matrix[MAX][MAX]; // Adjacency matrix
std::string color[MAX];
int previous[MAX];
int d[MAX];
int f[MAX];
int time_equal;
using namespace std;


void addEdge(int u, int v);
void DFS_Visit(int u);
void DFS(int u);
void printResults();
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // cout.tie(0);
    V = 6; // Number of vertices
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            Adjacency_Matrix[i][j] = 0; // Initialize adjacency matrix with 0
        }
    }

    addEdge(0, 1);
    addEdge(1, 2);
    addEdge(2, 3);
    addEdge(3, 4);
    addEdge(5, 6);
    addEdge(7, 8);
    int startNode = 0; // Starting node for DFS
    DFS(startNode);
    printResults();

    return 0;
}


void addEdge(int u, int v) {
    Adjacency_Matrix[u][v] = 1; // Add an edge from u to v
}

void DFS_Visit(int u) {
    color[u] = "GREY";
    time_equal++;
    d[u] = time_equal;
    //for each v ∈ Adj[u]
    for (int v = 0; v < V; ++v) {
        if (Adjacency_Matrix[u][v] == 1 && color[v] == "WHITE") {
            previous[v] = u;
            DFS_Visit(v);
        }
    }

    color[u] = "BLACK";
    time_equal++;
    f[u] = time_equal;
}

void DFS(int u) {
    //for each vertex u ∈ V
    for (int u = 0; u < V; ++u) {
        color[u] = "WHITE";
        previous[u] = -1;
        d[u] = INT_MAX;
        f[u] = INT_MAX;
    }

    time_equal = 0;
   //for each vertex u ∈ V
    if (color[u] == "WHITE") {
        DFS_Visit(u);
    }

    for (int u = 0; u < V; ++u) {
        if (color[u] == "WHITE") {
            DFS_Visit(u);
        }
    }
}

void printResults() {
    cout << "Vertex\tPrev\tStart\tFinish\n";
    for (int i = 0; i < V; ++i) {
        cout << i << "\t" << previous[i] << "\t" << d[i] << "\t" << f[i] << "\n";
    }
}

