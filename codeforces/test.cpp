#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
  vector<string> strings;

  string newString;
  while (cin >> newString) {
    strings.push_back(newString);
  }

  unordered_map<string, int> wordCounts;
  vector<int> output(strings.size());

  for (int i = strings.size() - 1; i >= 0; i--) {
    string currentString = strings[i];

    if (wordCounts.contains(currentString))
  }
}