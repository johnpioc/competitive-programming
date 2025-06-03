#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int x, k;
    cin >> x >> k;

    int distanceLeftToCover = x;
    int jumps = 0;
    string toOutput;

    for (int i = x; i > 0 && distanceLeftToCover > 0; i--) {
      if (i % k != 0 && distanceLeftToCover - i >= 0) {
        toOutput += to_string(i) + " ";
        distanceLeftToCover -= i;
        jumps++;
        while (distanceLeftToCover % i == 0 && distanceLeftToCover > 0) {
          toOutput += to_string(i) + " ";
          jumps++;
          distanceLeftToCover -= i;
        }
      }
    }

    cout << jumps << "\n";
    cout << toOutput << "\n";
  }

}