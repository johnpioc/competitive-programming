#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool canFormN(int n, const vector<int>& k, unordered_map<int, int>& result) {
  vector<bool> dp(n + 1, false);
  vector<int> prev(n + 1, -1); // Stores index in k[] that was used last
  dp[0] = true;

  for (int i = 1; i <= n; ++i) {
    for (int idx = 0; idx < k.size(); ++idx) {
      int num = k[idx];
      if (i >= num && dp[i - num]) {
        dp[i] = true;
        prev[i] = idx; // Store index of k used to make this sum
        break;
      }
    }
  }

  if (!dp[n]) return false;

  // Backtrack to find the exact combination
  result.clear();
  int current = n;
  while (current > 0) {
    int idx = prev[current];
    if (idx == -1) break; // Should not happen if dp[n] is true

    result[k[idx]]++;
    current -= k[idx];
  }

  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k, x;
    cin >> n >> k >> x;

    unordered_map<int, int> linearCombination;
    vector<int> a;

    for (int i = 1; i <= k; i++) {
      if (i != x) a.push_back(i);
    }

    if (canFormN(n, a, linearCombination)) {
      cout << "YES\n";
      int totalNumbers = 0;
      string thirdLine = "";

      for (auto& [num,count] : linearCombination) {
        totalNumbers += count;
        for (int i = 0; i < count; i++) {
          thirdLine += to_string(num)  + " ";
        }
      }

      cout << totalNumbers << '\n';
      cout << thirdLine << '\n';
    } else {
      cout << "NO\n";
    }
  }
}