#include <iostream>
#include <string>
#include <vector>
#include "censor.h"

using namespace std;

bool test()
{
    string res_test_1 = censor("dog eat monkey");
    string res_test_2 = censor("kiwi eat zebra");
    string res_test_3 = censor("rabbit eat food");
    string res_test_4 = censor("food eat food, ok and?!");
    string res_test_5 = censor("Monkey flip");
    if ((res_test_1 == "*** eat ***") && (res_test_2 == "*** eat ***") && (res_test_3 == "*** eat ***") &&
        (res_test_4 == "*** eat ***, ok and?!")  && (res_test_5 == "*** flip"))
    {
        return true;
    }
    else return false;
}

int main()
{
    if (test() == true)
    {
        cout << "Test complete";
    }
    else cout << "Test failed";
}
