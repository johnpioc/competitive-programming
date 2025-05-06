#include <iostream>
#include <vector>
#include <algorithm>

// We can sort the sequence of numbers
// Then we can traverse through the sequence of numbers, and perform the operation for each i and i + 1

int main() {
    int testCases;
    std::cin >> testCases;

    for (int t=1; t<=testCases; t++) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);

        for (int i = 0; i < n; i++) {
            int newNum;
            std::cin >> newNum;
            a[i] = newNum;
        }

        while (a.size() > 1) {
            std::sort(a.begin(), a.end(), [](int a , int b) {
            return a < b;
            });

            std::vector<int> toAdd(a.size() / 2);

            for (int i = 0; i < a.size(); i += 2) {
                if (i == a.size() - 1) break;

                int sideA = a[i];
                int sideB = a[i + 1];
                int sideC = sideA + sideB - 1;

                toAdd[i / 2] = sideC;
            }

            // Delete elements of a
            if (a.size() % 2 == 0) {
                a.erase(a.begin(), a.end());
            } else a.erase(a.begin(), a.end() - 1);

            a.insert(a.begin(), toAdd.begin(), toAdd.end());
        }

        std::cout << a[0] << "\n";
    }

    return 0;
}