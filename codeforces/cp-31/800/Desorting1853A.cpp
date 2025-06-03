#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    bool isAlreadySorted = true;
    int smallestGap = INT_MAX;

    int a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
      int currentNumber = a[i];
      int previousNumber = a[i - 1];

      if (currentNumber < previousNumber) {
        isAlreadySorted = false;
        break;
      }

      if (currentNumber - previousNumber < smallestGap) {
        smallestGap = currentNumber - previousNumber;
      }
    }

    if (!isAlreadySorted) {
      cout << "0\n";
    } else {
      if (smallestGap == 0) {
        cout << "1\n";
      } else {
        cout << smallestGap / 2 + 1 << '\n';
      }
    }
  }
}