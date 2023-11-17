#include <iostream>
#include <string>
#include <vector>
#include "censor.h"

using namespace std;

int main()
{
    string in;
    cout << "Write something:" << endl;
    getline(cin,in);
    cout<<censor(in);
    return 0;
}
