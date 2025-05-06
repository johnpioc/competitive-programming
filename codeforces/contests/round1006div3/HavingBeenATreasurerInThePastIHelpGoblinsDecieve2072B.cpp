#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ll testCases;
    cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        ll n;
        cin >> n;

        ll numHyphen = 0;
        ll numUnderscore = 0;

        for (ll i = 0; i < n; i++) {
            char currentChar;
            cin >> currentChar;

            if (currentChar == '-') numHyphen++;
            else numUnderscore++;
        }

        if (numHyphen == 0 || numUnderscore == 0) {
            cout << 0 << "\n";
            continue;
        }

        if (numHyphen % 2 == 0) {
            cout << (numHyphen / 2) * (numHyphen / 2) * numUnderscore << "\n";
        } else {
            ll a = numHyphen / 2;
            ll b = a + 1;

            cout << a * b * numUnderscore << "\n";
        }
    }
}