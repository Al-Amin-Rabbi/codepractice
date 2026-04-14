#include<bits/stdc++.h>
using namespace std;

class Graph {
    int V; // Number of vertices
    list<int> *adj; // Adjacency list
    vector<string> color;
    vector<int> prev;
    vector<int> d;
    vector<int> f;
    int time;

public:
    Graph(int V); // Constructor
    void addEdge(int u, int v); // Method to add an edge
    void DFS(); // Method to perform DFS
    void DFSVisit(int u); // Method to visit nodes during DFS

    // Helper function to print the results
    void printResults();
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
    color = vector<string>(V, "WHITE");
    prev = vector<int>(V, -1);
    d = vector<int>(V, INT_MAX);
    f = vector<int>(V, INT_MAX);
    time = 0;
}

void Graph::addEdge(int u, int v) {
    adj[u].push_back(v); // Add v to u's list.
}

void Graph::DFS() {
    for (int u = 0; u < V; ++u) {
        color[u] = "WHITE";
        prev[u] = -1;
        d[u] = INT_MAX;
        f[u] = INT_MAX;
    }

    time = 0;

    for (int u = 0; u < V; ++u) {
        if (color[u] == "WHITE") {
            DFSVisit(u);
        }
    }
}

void Graph::DFSVisit(int u) {
    color[u] = "GREY";
    time++;
    d[u] = time;

    for (int v : adj[u]) {
        if (color[v] == "WHITE") {
            prev[v] = u;
            DFSVisit(v);
        }
    }

    color[u] = "BLACK";
    time++;
    f[u] = time;
}

void Graph::printResults() {
    cout << "Vertex\tStart\tFinish\tPrev\n";
    for (int i = 0; i < V; ++i) {
        cout << i << "\t" << d[i] << "\t" << f[i] << "\t" << prev[i] << "\n";
    }
}

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);

    g.DFS();
    g.printResults();

    return 0;
}