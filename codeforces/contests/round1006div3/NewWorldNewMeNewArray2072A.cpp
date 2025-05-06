#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t<=testCases; t++) {
        int n, k, p;
        cin >> n >> k >> p;

        k = abs(k);

        int numOfOperations = ceil(double(k) / p);

        if (n < numOfOperations) {
            cout << -1 << "\n";
        } else {
            cout << numOfOperations << "\n";
        }
    }
}
