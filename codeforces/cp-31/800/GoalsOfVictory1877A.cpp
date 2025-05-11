#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int numOfTeams;
    cin >> numOfTeams;

    int rollingSum = 0;

    for (int i = 0; i < numOfTeams - 1; i++) {
      int currentNum;
      cin >> currentNum;

      rollingSum += currentNum;
    }

    cout << 0 - rollingSum << "\n";
  }
}
