#include <iostream>
#include <vector>
#include <algorithm>

#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
    if (x == 0) return y;
    if (y == 0) return x;
    return gcd(y, x % y);
}

vector<ll> getdivs(ll n) {
    vector<ll> divs;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            divs.push_back(n / i);
        }
    }
    return divs;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> divisors = getdivs(n);

    vector<ll> ans;

    for (ll g : divisors) {
        ll len = n / g;
        ans.push_back(g * (len * (len - 1) /2) + len);
    }

    getunique(ans);

    for (ll x : ans) cout << x << " ";
}