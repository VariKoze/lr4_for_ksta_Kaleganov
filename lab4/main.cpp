#include <iostream>
#include <string>
#include <vector>
#include "censor.h"
#include "test.h"

using namespace std;

/**
@mainpage Word censorship apps
Tasks:
- takes a string with certain words
- censors the entered string
- displays the censored string

\authors
Kaleganov
\version
1.1.0
*/

/**
    @file main.cpp
*/

/**
    @brief Main function
    @details
    Here the tester function is launched, based on the results of which we will
    receive an answer in the console: whether the test passed or not
*/

int main()
{
    if (test() == true)
    {
        cout << "Test complete";
    }
    else cout << "Test failed";
}
