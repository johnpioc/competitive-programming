#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> cards(n * m, vector<int>(2));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int cardNum;
                cin >> cardNum;
                cards[i * m + j][0] = cardNum;
                cards[i * m + j][1] = i;
            }
        }

        sort(cards.begin(), cards.end(), [](vector<int> a, vector<int> b) {
            return a[0] < b[0];
        });

        vector<int> order(n);
        bool isValid = true;

        for (int i = 0; i < n * m; i++) {
            if (i < n) {
                order[i] = cards[i][1];
            } else {
                int currentCow = cards[i][1];
                if (currentCow != order[i % n]) {
                    isValid = false;
                    break;
                }
            }
        }

        if (isValid) {
            for (int cow : order) cout << cow + 1 << " ";
            cout << "\n";
        } else {
            cout << "-1\n";
        }
    }
}