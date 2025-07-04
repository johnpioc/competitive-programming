#include <iostream>
#include <set>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    set<int> picked = {};
    string winner = "Bob";

    for (int i = 0; i < n; i++) {
      if (picked.count(i) == 0) {
        int aliceNumber = i;

        int bobNumber = -1;
        for (int j = i + 1; j < n; j++) {
          if (picked.count(j) == 0) {
            if ((aliceNumber + j - 3) % 4 == 0) {
              bobNumber = j;
              picked.insert(j);
              break;
            }
          }
        }

        if (bobNumber == -1) {
          winner = "Alice";
          break;
        }

        picked.insert(aliceNumber);
      }
    }

    cout << winner << "\n";
  }
}