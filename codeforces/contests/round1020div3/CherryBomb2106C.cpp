#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;

    for (int t = 1; t<= testCases; t++) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        int highestA = -1;
        int lowestA = k + 1;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > highestA) highestA = a[i];
            if (a[i] < lowestA) lowestA = a[i];
        }

        int x = -1;

        for (int i = 0; i < n; i++) {
            cin >> b[i];

            if (b[i] > -1 && x == -1) {
                x = b[i] + a[i];
            } else if (x != -1 && b[i] > -1 && x != b[i] + a[i]) {
                x = -2;
            }
        }

        if (x == -2) {
            cout << "0\n";
            continue;
        }

        // If we know x
        if (x != -1) {
            bool numOfWays = 1;
            for (int i = 0; i < n; i++) {
                if (x - a[i] > k || x - a[i] < 0) {
                    numOfWays = 0;
                    break;
                }
            }
            cout << numOfWays << "\n";
        }
        // If we don't know x
        else {
            int upperBound = lowestA + k;
            int lowerBound = highestA + 0;
            cout << upperBound - lowerBound + 1 << "\n";
        }

    }
}