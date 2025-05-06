#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 1; t<=testCases;t++) {
        int n,m,k;
        cin >> n >> m >> k;

        int numOfDesks = ceil(double(k) / n);
        int benches = m - numOfDesks + 1;
        int longestBench = (numOfDesks + benches - 1) / benches;
        cout << longestBench << "\n";
    }
}