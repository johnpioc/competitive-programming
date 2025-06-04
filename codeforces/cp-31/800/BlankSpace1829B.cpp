#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int longestStreak = 0;
    int consecutiveZeroes = 0;

    for (int i = 0; i < n; i++) {
      int currentNum;
      cin >> currentNum;

      if (currentNum == 0) {
        consecutiveZeroes++;
      } else {
        if (consecutiveZeroes > longestStreak) {
          longestStreak = consecutiveZeroes;
        }
        consecutiveZeroes = 0;
      }
    }

    if (consecutiveZeroes > longestStreak) {
      longestStreak = consecutiveZeroes;
    }

    cout << longestStreak << "\n";
  }
}