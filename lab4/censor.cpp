#include "censor.h"
#include <vector>

/**
    @file censor.cpp
*/

string censor(string in)
{
	vector<string> censored = { "rabbit", "food", "dog", "monkey", "zebra", "kiwi", "Rabbit", "Food", "Dog", "Monkey", "Zebra", "Kiwi"}; // all ban words

    string out = "";//output string
    string tmp = "";//temporary string

	in += " ";
    for (int i = 0; i < in.size(); i++)
    {//iterating through the 'in' string
        if ((in[i] != ' ') && (in[i] != ',') && (in[i] != '.') && (in[i] != '!') && (in[i] != '?'))
        {//finding punctuation marks
            tmp += in[i];
        }
        else
        {
            for (int c = 0; c < censored.size(); c++)
            {//search for ban words
                if (tmp == censored[c])
                {//ban
                    tmp = "***";
                }
            }
            if ((i == in.size() - 1))
            {//add temporary string in output string
                out += tmp;
            }
            else
            {//adding punctuation marks if any
                switch (in[i])
                {
                case ',':out += tmp + ','; break;
                case '.':out += tmp + '.'; break;
                case '!':out += tmp + '!'; break;
                case '?':out += tmp + '?'; break;
                default: out += tmp + " ";
                }
            }

            tmp = "";//clear temporary string
        }

    }

    return out;
}

