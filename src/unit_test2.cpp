//
// Created by zjp on 18-12-10.

#include "catch.h"
#include <iostream>

using namespace std;

#define TEST125


#ifndef TEST125ED
#include "125ValidPalindrome.h"
TEST_CASE("125ValidPalindrome"){
    SECTION("1251"){
        string s = "A man, a plan, a canal: Panama";
        REQUIRE(isPalindrome(s)==true);
    }
    SECTION("1252"){
        string s = "race a car";
        REQUIRE(isPalindrome(s)==false);
    }
    SECTION("1253"){
        string s = "0P";
        REQUIRE(isPalindrome(s)==false);
    }
}

#endif


