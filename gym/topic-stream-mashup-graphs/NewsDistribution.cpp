#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    vector<int> edges[n];

    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;

        vector<int> v(k);
        for (int j = 0; j < k; j++) {
            cin >> v[j];
            --v[j];
        }

        for (int j = 0; j + 1 < k; j++) {
            edges[v[j]].push_back(v[j + 1]);
            edges[v[j + 1]].push_back(v[j]);
        }
    }

    bool visited[n];
    memset(visited, 0, sizeof(visited));

    int a[n];

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            vector<int> component;

            queue<int> q;
            q.push(i);

            while (!q.empty()) {
                int x = q.front();
                q.pop();

                if (visited[x]) continue;
                visited[x] = true;
                component.push_back(x);

                for (int y : edges[x]) {
                    if (!visited[y]) {
                        q.push(y);
                    }
                }
            }

            for (int x: component) a[x] = component.size();
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}