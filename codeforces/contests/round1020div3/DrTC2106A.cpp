#include <iostream>
#include <vector>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t<=testCases; t++) {
        int n;
        cin >> n;

        int baseNumberOfOnes = 0;
        string binaryString;
        cin >> binaryString;

        for (int i = 0; i < n; i++) {
            int currentNum = binaryString[i] - '0';
            if (currentNum == 1) baseNumberOfOnes++;
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (binaryString[i] - '0' == 0) {
                sum += baseNumberOfOnes + 1;
            } else {
                sum += baseNumberOfOnes - 1;
            }
        }

        cout << sum << "\n";
    }
}