// main.cpp
#include <iostream>
#include <string>
#include "consts.h"

using namespace std;

int main()
{
    string input;
    bool correct;
    int score = 0;
    int tot = 0;
    //char letter = 'A';
    // uppercase ASCII alphabet start at 65
    while (input != "done") {
      int letter_val = rand() % 26 + 65;
      char letter = (char)letter_val;

      cout << letter << '\n';
      tot = tot + 1;
      cin >> input;

      while (!correct) {
        try {
          correct = input == NATOLib::dict.at(letter);
          if (input == "done") {
            cout << "Goodbye.\n";
            break;
          } else if (input == "score") {
            cout << "Score: " << score << "/" << tot;
            break;
          } else if (correct) {
            cout << "Good job!\n";
            score = score + 1;
          } else {
            throw 0;
          }
        } catch (...) {
          cout << "Try again.\n";
          cin >> input;
        }
      }
      correct = false;
    }

    return 0;
}
