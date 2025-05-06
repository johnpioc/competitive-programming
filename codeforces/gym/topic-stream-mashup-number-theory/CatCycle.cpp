#include <iostream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n, k;
        cin >> n >> k;
        --k;

        if (n % 2 == 0) {
            cout << 1 + k % n << "\n";
        } else {
            int intersections = k / ((n-1) / 2);
            cout << 1 + (k + intersections) % n << "\n";
        }

    }
}