#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        bool isAlreadyDecreasing = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i > 0) {
                if (a[i - 1] > a[i]) {
                    isAlreadyDecreasing = false;
                }
            }
        }

        if (k < 2 && !isAlreadyDecreasing) {
            cout << "NO\n";
        } else cout << "YES\n";
    }
}