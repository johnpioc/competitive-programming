#include <iostream>
#include <vector>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t<=testCases; t++) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int matches = 1;
        if (a4 - a2 == a5 - a4) {
            if (a4 - a2 == a1 + a2) {
                matches = 3;
            } else matches = 2;
        } else if (a5 - a4 == a1 + a2) {
            if (a5 - a4 == a4 - a2) {
                matches  =3;
            } else matches = 2;
        } else if (a4 - a2 == a1 + a2) {
            if (a4 - a2 == a5 - a4) {
                matches = 3;
            } else matches = 2;
        }

        cout << matches << "\n";
    }
}