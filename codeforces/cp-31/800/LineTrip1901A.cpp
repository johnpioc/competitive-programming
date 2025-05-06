#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> gasStations(n);

        int biggestGap = -1;

        for (int i = 0; i < n; i++) {
            cin >> gasStations[i];

            if (i == 0) {
                biggestGap = gasStations[i] - 0;
            }

            if (i == n - 1) {
                if ((x - gasStations[i]) * 2 > biggestGap) {
                    biggestGap = (x - gasStations[i]) * 2;
                }
            }

            if (i > 0 && gasStations[i] - gasStations[i - 1] > biggestGap) {
                biggestGap = gasStations[i] - gasStations[i - 1];
            }
        }

        cout << biggestGap << "\n";
    }
}