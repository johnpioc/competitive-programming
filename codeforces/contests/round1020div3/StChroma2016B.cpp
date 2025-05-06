#include <iostream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t<=testCases; t++) {
        int n, x;
        cin >> n >> x;

        for (int i = 0; i < x; i++) {
            cout << i << " ";
        }

        for (int i = x + 1; i < n; i++) {
            cout << i << " ";
        }

        if (x < n) {
            cout << x << "\n";
        } else {
            cout << "\n";
        }
    }
}