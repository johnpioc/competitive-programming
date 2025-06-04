#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int numOfPositives = 0;
    int numOfNegatives = 0;

    for (int i = 0; i < n; i++) {
      int currentNumber;
      cin >> currentNumber;

      if (currentNumber < 0) numOfNegatives++;
      else numOfPositives++;
    }

    int numOfOperations = 0;
    while (numOfNegatives % 2 == 1 || numOfPositives < numOfNegatives) {
      numOfNegatives--;
      numOfPositives++;
      numOfOperations++;
    }

    cout << numOfOperations << "\n";

  }
}