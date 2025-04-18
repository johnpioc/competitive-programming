#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

ll dfs(ll v, ll c[], bool visited[], vector<ll> edges[]) {
    ll minimum = c[v];
    visited[v] = true;

    for (ll x: edges[v]) {
        if (!visited[x]) {
            minimum = min(minimum, dfs(x, c, visited, edges));
        }
    }

    return minimum;
}

int main() {
    ll n, m;
    cin >> n >> m;

    ll c[n];

    for (ll i = 0; i < n; i++) {
        cin >> c[i];
    }

    vector<ll> edges[n];

    for (ll i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;
        --u, --v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    bool visited[n];
    fill_n(visited, n, false);

    ll minCost = 0;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            minCost += dfs(i, c, visited, edges);
        }
    }

    cout << minCost << "\n";
}