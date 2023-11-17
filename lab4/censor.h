#ifndef CENSOR_H
#define CENSOR_H

#include <iostream>
#include <string>

using namespace std;

/**
    @file censor.h
*/

/**
    @brief Censoring words
    @details
    A string is taken as input, which as a result will be subject
    to censorship and this word from the list will be replaced with ***

    @param in input string that will be censored
    @return the resulting string with the censored word
*/


string censor(string in);


#endif
