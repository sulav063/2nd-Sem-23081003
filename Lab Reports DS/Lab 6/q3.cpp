#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge {
public:
    int src, dest, weight;

    Edge(int source, int destination, int w) {
        src = source;
        dest = destination;
        weight = w;
    }
};

class Graph {
public:
    int V, E;
    vector<Edge> edges;

    Graph(int vertices, int edgesCount) {
        V = vertices;
        E = edgesCount;
        edges.reserve(E);
    }

    void addEdge(int src, int dest, int weight) {
        Edge edge(src, dest, weight);
        edges.push_back(edge);
    }

    int find(vector<int>& parent, int vertex) {
        if (parent[vertex] == -1)
            return vertex;
        return find(parent, parent[vertex]);
    }


    void unionSets(vector<int>& parent, int x, int y) {
        int xSet = find(parent, x);
        int ySet = find(parent, y);
        parent[xSet] = ySet;
    }

    // Kruskal's MST algorithm
    void kruskalMST() {
        vector<Edge> resultMST;
        sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b) {
            return a.weight < b.weight;
        });

        vector<int> parent(V, -1);

        for (Edge edge : edges) {
            int x = find(parent, edge.src);
            int y = find(parent, edge.dest);

            if (x != y) {
                resultMST.push_back(edge);
                unionSets(parent, x, y);
            }
        }

        cout << "Minimum Spanning Tree (MST) edges:" << endl;
        for (Edge edge : resultMST) {
            cout << edge.src << " - " << edge.dest << " : " << edge.weight << endl;
        }
    }
};

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    Graph graph(V, E);

    cout << "Enter the edges (source, destination, weight):" << endl;
    for (int i = 0; i < E; i++) {
        int src, dest, weight;
        cin >> src >> dest >> weight;
        graph.addEdge(src, dest, weight);
    }

    graph.kruskalMST();

    return 0;
}
