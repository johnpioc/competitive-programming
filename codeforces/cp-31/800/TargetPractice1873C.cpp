#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int score = 0;

    for (int y = 0; y < 10; y++) {
      for (int x = 0; x < 10; x++) {
        char currentChar;
        cin >> currentChar;

        if (currentChar == '.')
          continue;

        if (x > 0 && y > 0 && x < 9 && y < 9) {
          if (x > 1 && y > 1 && x < 8 && y < 8) {
            if (x > 2 && y > 2 && x < 7 && y < 7) {
              if (x > 3 && y > 3 && x < 6 && y < 6) {
                score += 5;
              } else {
                score += 4;
              }
            } else {
              score += 3;
            }
          } else {
            score += 2;
          }
        } else {
          score += 1;
        }
      }
    }
    cout << score << "\n";
  }
}
