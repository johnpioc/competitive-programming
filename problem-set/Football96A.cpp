#include <iostream>

int main() {
  std::string line;
  std::getline(std::cin, line);

  char character = '1';
  int consecutive = 0;

  bool isDangerous = false;

  for (int i = 0; i < line.size(); i++) {
    if (consecutive == 7) {
      isDangerous = true;
      break;
    }
    char currentChar = line[i];
    if (currentChar == character) {
      consecutive++;
    } else {
      consecutive = 1;
      character = currentChar;
    }
  }

  if (consecutive == 7) {
    isDangerous = true;
  }

  if (isDangerous) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}