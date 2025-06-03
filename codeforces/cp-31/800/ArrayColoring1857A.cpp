#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int numOfOdds = 0;

    for (int i = 0; i < n; i++) {
      int currentNum;
      cin >> currentNum;

      if (currentNum % 2 == 1) numOfOdds++;
    }

    if (numOfOdds % 2) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
}