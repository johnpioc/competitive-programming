#include <iostream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t<=testCases; t++) {
        int n;
        cin >> n;

        bool chars[8] = {};
        int numCollected = 0;
        int indexToStop = 0;

        for (int i = 0; i < n; i++) {
            int currentNum;
            cin >> currentNum;

            if (currentNum == 0) {
                if (chars[0] == false) {
                    chars[0] = true;
                    numCollected++;
                } else if (chars[2] == false) {
                    chars[2] = true;
                    numCollected++;
                } else if (chars[5] == false) {
                    chars[5] = true;
                    numCollected++;
                }
            } else if (currentNum == 1 && chars[1] == false) {
                chars[1] = true;
                numCollected++;
            } else if (currentNum == 3 && chars[3] == false) {
                chars[3] = true;
                numCollected++;
            } else if (currentNum == 2) {
                if (chars[4] == false) {
                    chars[4] = true;
                    numCollected++;
                } else if (chars[6] == false) {
                    chars[6] = true;
                    numCollected++;
                }
            } else if (currentNum == 5 && chars[7] == false) {
                chars[7] = true;
                numCollected++;
            }

            if (numCollected == 8 && indexToStop == 0) {
                indexToStop = i + 1;
            }
        }

        cout << indexToStop << "\n";
    }
}