#include <iostream>

int main() {
    int testCases;
    std::cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        int k;
        std::cin >> k;

        if (k % 2 == 0) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }
}