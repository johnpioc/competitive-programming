#include <climits>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int min = INT_MAX;

  for (int i = 0; i < n; i++) {
    int currentNum;
    cin >> currentNum;

    if (abs(currentNum) < min) {
      min = abs(currentNum);
    }
  }

  cout << min << "\n";
}
