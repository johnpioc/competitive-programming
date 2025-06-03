#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    int annaTurn = (1 + c) % 2;

    if (annaTurn && a == b) {
      cout << "Second";
    } else if (!annaTurn && a == b) {
      cout << "First";
    } else if (a > b) {
      cout << "First";
    } else if (a < b) {
      cout << "Second";
    }

    cout << '\n';
  }
}