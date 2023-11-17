#include <iostream>
#include <string>
#include <vector>
#include "censor.h"
#include "test.h"

using namespace std;

int main()
{
    if (test() == true)
    {
        cout << "Test complete";
    }
    else cout << "Test failed";
}
