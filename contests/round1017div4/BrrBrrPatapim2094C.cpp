#include <iostream>

using namespace std;

/* Logic
 *
 *  We can create an array of length 2 * n
 *  We can definitely find the permutation by traversing through the whole grid, but this may be unnecessary
 *
 */

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n;
        cin >> n;

        int* p = new int[2*n]();
        bool* taken = new bool[2*n]();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int currentNum;
                cin >> currentNum;

                p[i + j - 1] = currentNum;
                taken[currentNum - 1] = true;
            }
        }

        for (int i = 0; i < 2*n; i++) {
            if (p[i] == 0) {
                for (int j = 0; j < 2*n; j++) {
                    if (taken[j] == false) {
                        cout << (j + 1);
                        break;
                    }
                }
            } else {
                cout << p[i];
            }

            if (i < 2*n - 1) {
                cout << " ";
            }
        }

        cout << "\n";
    }
}