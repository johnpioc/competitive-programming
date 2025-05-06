#include <iostream>
#include <algorithm>

int main() {
    // Read s and n
    int s;
    int n;

    std::cin >> s >> n;

    // Read n dragons and store in an array
    int** dragons = new int*[n];

    for (int i = 0; i < n; i++) {
        dragons[i] = new int[2]{0};
        std::cin >> dragons[i][0] >> dragons[i][1];
    }

    // Sort dragons array in increasing order
    std::sort(dragons, dragons + n, [](const int a[], const int b[]) {
        return a[0] < b[0];
    });

    // Traverse dragons array and check if strength is higher than current dragon
    bool isBeatable = true;

    for (int i = 0; i < n; i++) {
        if (s <= dragons[i][0]) {
            isBeatable = false;
            break;
        }

        s += dragons[i][1];
    }

    // Output YES if all dragons were defeated, no otherwise
    if (isBeatable) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
    return 0;
}