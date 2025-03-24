#include <iostream>
#include <cmath>

double getDistance(double x1, double y1, double x2, double y2) {
    return std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
}

int main() {
    int testCases;
    std::cin >> testCases;

    for (int t = 1; t<=testCases;t++) {
        double l, r , d, u;
        std::cin >> l >> r >> d >> u;

        if (l == r && l == d && l == u && r == d && d == u && d == u) {
            std::cout << "Yes\n";
        } else std::cout << "No\n";
    }

    return 0;
}