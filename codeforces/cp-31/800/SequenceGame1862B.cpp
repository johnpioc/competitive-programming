#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // Get length of sequence b, n
        int n;
        cin >> n;

        // Get sequence b and save it to a vector
        vector<int> seqB(n);

        for (int i = 0; i < n; i++) {
            cin >> seqB[i];
        }

        // Iterate through sequence of B and create a new sequence A
        vector<int> seqA;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                seqA.push_back(seqB[i]);
            } else {
                int currentNumber = seqB[i];
                int previousNumber = seqB[i - 1];

                if (currentNumber >= previousNumber) {
                    seqA.push_back(currentNumber);
                } else {
                    seqA.push_back(currentNumber);
                    seqA.push_back(currentNumber);
                }
            }
        }
        cout << seqA.size() << "\n";

        for (const int num : seqA) {
            cout << num << " ";
        }
        cout << '\n';
    }
}