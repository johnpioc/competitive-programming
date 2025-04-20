#include <iostream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t<= testCases; t++) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << -1 << '\n';
        } else {
            for (int i = 1; i <= n; i += 2) {
                cout << i << " ";
            }

            for (int i = 2; i <= n; i += 2) {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
}