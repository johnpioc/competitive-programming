#include <iostream>

int main() {
    int testCases;
    std::cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        for (int i = 0; i < 3; i++) {
            std::string word;
            std::cin >> word;
            std::cout << word[0];
        }
        std::cout << '\n';
    }
}