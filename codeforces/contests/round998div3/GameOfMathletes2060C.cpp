#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    ll testCases;
    cin >> testCases;

    for (ll t = 1; t <= testCases; t++) {
        ll n,k;
        cin >> n >> k;

        vector<ll> counts(n, 0);
        vector<ll> integers(n, 0);

        for (ll i = 0; i < n; i++) {
            ll currentInt;
            cin >> currentInt;

            integers[i] = currentInt;
            counts[currentInt - 1]++;
        }

        ll score = 0;
        for (ll x : integers) {
            if (counts[x - 1] == 0) continue;
            counts[x - 1]--;

            ll c = k - x;
            if (c >= 1 && c <= n && counts[c - 1] > 0) {
                counts[c - 1]--;
                score++;
            }
        }


        cout << score << "\n";
    }
}