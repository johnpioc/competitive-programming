#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> aSorted(n);
    vector<int> b;
    vector<int> c;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      aSorted[i] = a[i];
    }

    sort(aSorted.begin(), aSorted.end());

    for (int aNum: a) {
      if (aNum == aSorted[0]) {
        b.push_back(aNum);
      } else {
        c.push_back(aNum);
      }
    }

    if (b.empty() || c.empty()) {
      cout << "-1\n";
    } else {
      cout << b.size() << " " << c.size() << "\n";
      for (int bNum: b) cout << bNum << " ";
      cout << '\n';
      for (int cNum: c) cout << cNum << " ";
      cout << "\n";
    }
  }
}