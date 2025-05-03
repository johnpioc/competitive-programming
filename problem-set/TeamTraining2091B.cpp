#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);
        reverse(a, a + n);

        int ans = 0;
        for (int i = 0, cnt = 1; i < n; i++, cnt++) {
            if (a[i] * cnt >= x) {
                ans++;
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
}
