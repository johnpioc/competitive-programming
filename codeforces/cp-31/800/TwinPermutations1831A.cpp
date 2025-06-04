#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      int currentNum;
      cin >> currentNum;

      cout << n - currentNum + 1 << " ";
    }
    cout << "\n";

  }
}