#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii; 

void dijkstra(int start, int n, vector<vector<pii>>& adj) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<int> dist(n, INT_MAX);

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "\nShortest Distances from Station " << start << ":\n";
    for (int i = 0; i < n; i++) {
        cout << "To Station " << i << " : " << dist[i] << " mins\n";
    }
}

int main() {
    int n = 5; 
    vector<vector<pii>> adj(n);
    adj[0].push_back({1, 10}); adj[0].push_back({4, 20});
    adj[1].push_back({2, 5});  adj[2].push_back({3, 15});
    adj[4].push_back({3, 10});

    cout << "--- Metro Route Optimizer ---" << endl;
    dijkstra(0, n, adj);
    return 0;
}