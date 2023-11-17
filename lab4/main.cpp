#include <iostream>
#include <string>
#include <vector>

using namespace std;

string censor(string in)
{
	vector<string> censored = { "rabbit", "food", "dog", "monkey", "zebra", "kiwi", "Rabbit", "Food", "Dog", "Monkey", "Zebra", "Kiwi"};

    string out = "";
    string tmp = "";

	in += " ";
    for (int i = 0; i < in.size(); i++)
{
    if ((in[i] != ' ') && (in[i] != ',') && (in[i] != '.') && (in[i] != '!') && (in[i] != '?'))
    {
        tmp += in[i];
    }
    else
    {
        for (int c = 0; c < censored.size(); c++)
        {
            if (tmp == censored[c])
            {
                tmp = "***";
            }
        }
        if ((i == in.size() - 1))
        {
            out += tmp;
        }
        else
        {
            switch (in[i])
            {
            case ',':out += tmp + ','; break;
            case '.':out += tmp + '.'; break;
            case '!':out += tmp + '!'; break;
            case '?':out += tmp + '?'; break;
            default: out += tmp + " ";
            }
        }

        tmp = "";
    }

}

    return out;
}

int main()
{
    string in;
    cout << "Write something:" << endl;
    getline(cin,in);
    cout<<censor(in);
    return 0;
}
