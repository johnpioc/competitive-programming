#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int testCases;
    std::cin >> testCases;

    for (int t = 1; t <= testCases; t++) {
        // Read n and m
        int n, m;
        std::cin >> n >> m;

        // Store elements in a vector of vectors
        std::vector<std::vector<int>> arr(n, std::vector<int>(m + 1, 0));

        // Read elements and compute row sum
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < m; j++) {
                std::cin >> arr[i][j];
                sum += arr[i][j];
            }
            arr[i][m] = sum; // Store row sum in the last column
        }

        // Sort arrays by the sum (descending order)
        std::sort(arr.begin(), arr.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a.back() > b.back(); // Sort by last element (sum)
        });

        long long score = 0;
        int multiplier = m * n;

        // Compute score
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                score += 1LL * arr[i][j] * multiplier;
                multiplier--;
            }
        }

        std::cout << score << "\n";
    }

    return 0;
}
