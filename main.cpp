// main.cpp
#include <iostream>
#include <string>
#include "consts.h"

using namespace std;

int main()
{
    string input;
    char letter = 'A';

    cout << letter;
    cout << "\nType something: ";
    cin >> input;
    string message = (input == NATOLib::A) ? "Good job!" : "Try again";
    cout << message;

    return 0;
}