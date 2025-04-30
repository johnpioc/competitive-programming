#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int useOfActionOne = 0;
        int numOfEmpty = 0;

        for (char cell : s) {
            if (cell == '#') {
                useOfActionOne += numOfEmpty;
                numOfEmpty = 0;
            } else if (cell == '.') {
                if (numOfEmpty < 2) {
                    numOfEmpty++;
                } else if (numOfEmpty == 2) {
                    useOfActionOne += numOfEmpty;
                    numOfEmpty++;
                    break;
                }
            }
        }

        if (numOfEmpty < 3) {
            useOfActionOne += numOfEmpty;
        } else {
            useOfActionOne = 2;
        }



        cout << useOfActionOne << "\n";
    }
}