#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    vector<string> strings;

    string newString;
    while (cin >> newString) {
        strings.push_back(newString);
    }

    unordered_map<string, int> wordCounts;
    vector<int> output(strings.size());

    for (int i = strings.size() - 1; i >= 0; i--) {
        cout << i << "\n";
        string currentString = strings[i];

        if (wordCounts.contains(currentString)) {
            output[i] = wordCounts[currentString];
            wordCounts[currentString]++;
        } else {
            output[i] = 0;
            wordCounts[currentString] = 1;
        }
    }

    for (int i = 0; i < strings.size(); i++) {
        cout << "Word " << i << " future occurrences: " << output[i] << "\n";
    }
}
