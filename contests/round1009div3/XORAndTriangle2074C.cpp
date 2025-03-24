#include <iostream>

int main() {
    int testCases;
    std::cin >> testCases;

    for (int t=1; t<=testCases;t++) {
        int x;
        std::cin >> x;
        int result = -1;

        for (int i = 0; i < 31; i++) {
            for (int j = 0; j < 31; j++) {
                int y = (1 << i) | (1 << j);
                if (y < x && x + y > (x ^ y) && y + (x ^ y) > x) {
                    result = y;
                    break;
                }
            }
        }

        std::cout << result << "\n";
    }
}