#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int a[n - 1];

    for (int i = 0; i < n - 1; i++) cin >> a[i];

    int curr = 1;
    while (curr < n) {
        curr = curr + a[curr - 1];
        if (curr == t) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}