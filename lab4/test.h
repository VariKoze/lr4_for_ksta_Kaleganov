#ifndef TEST_H
#define TEST_H
#include "censor.h"


/**
    @file test.h
*/

/**
    @brief Checking for correct operation of the qualification system
    @details
    This function checks the correct operation of the censor, taking pre-entered strings as a basis
    @param res_test_1 first string to be tested
    @param res_test_2 second string to be tested
    @param res_test_3 third string to be tested
    @param res_test_4 fourth string to be tested
    @param res_test_5 fifth string to be tested
    @result
    This function returns true if the program worked as the author intended or false if the program produced an undesirable result
*/

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

#endif
