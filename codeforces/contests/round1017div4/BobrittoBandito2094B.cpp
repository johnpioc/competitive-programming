#include <iostream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        // We want to find the number of houses that have been infected between the mth day and nth day where m <= n
        //  Now, add to left value until we reach 0, then minus the remainder of that on right value

        int numInfected = n - m;
        int leftDistance = abs(l);

        if (numInfected <= leftDistance) {
            l += numInfected;
        } else {
            int remainder = numInfected - leftDistance;
            l += numInfected - remainder;

            r -= remainder;
        }

        cout << l << " " << r << '\n';
    }
}