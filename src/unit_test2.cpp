//
// Created by zjp on 18-12-10.

#include "catch.h"
#include <iostream>

using namespace std;

#define TEST125ED
#define TEST136
#define TEST137ED


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

#ifndef TEST136ED

#include "136SingleNumber.h"
TEST_CASE("136SingleNumber"){
    SECTION("1361"){
        vector<int> nums = {2,2,1};
        REQUIRE(singleNumber(nums)==1);
    }
    SECTION("1362"){
        vector<int> nums = {4,1,2,1,2};
        REQUIRE(singleNumber(nums)==4);
    }
}

#endif

#ifndef TEST137ED

#include "137SingleNumberII.h"
TEST_CASE("137SingleNumberII"){
    SECTION("1371"){
        vector<int> nums = {2,2,3,2};
        REQUIRE(singleNumber(nums)==3);
    }
    SECTION("1371"){
        vector<int> nums = {0,1,0,1,0,1,99};
        REQUIRE(singleNumber(nums)==99);
    }
}

#endif


