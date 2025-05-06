#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    string output = "NO\n";

    for (int i = 0; i < n; i++) {
      int currentNum;
      cin >> currentNum;

      if (currentNum == k) {
        output = "YES\n";
      }
    }

    cout << output;
  }
}
