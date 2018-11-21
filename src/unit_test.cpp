#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include <iostream>

using namespace std;

#define TEST1ED
#define TEST7ED
#define TEST9ED
#define TEST12
#define TEST13ED


#ifdef TEST1
#include "../include/1TwoSum.h"

TEST_CASE("_1TwoSum"){
    SECTION("test_1") {
        vector<int> nums = {3, 2, 4};
        int target = 6;
        vector<int> result = twoSum(nums, target);
        for (int a:result)
            cout << a << "  ";
    }
}
#endif


#ifdef TEST7
#include "../include/7ReverseInteger.h"

TEST_CASE("_7ReverseInteger"){
    SECTION("test_71") {
        cout << reverse(123) << endl;
    }
    SECTION("test_72") {
        cout << reverse(-123) << endl;
    }
    SECTION("test_73") {
        cout << reverse(120) << endl;
    }
    SECTION("test_74") {
        cout << reverse(90100) << endl;
    }
    SECTION("test_75") {
        cout << reverse(1534236469) << endl;
    }
    SECTION("test_76") {
        cout << reverse(1563847412) << endl;
    }
}
#endif

#ifdef TEST9

#include "../include/9PalindromeNumber.h"
TEST_CASE("_9PalindromeNumber"){
    SECTION("_91") {
        cout << isPalindrome(121) << endl;
    }
    SECTION("_92") {
        cout << isPalindrome(-121) << endl;
    }
    SECTION("_93") {
        cout << isPalindrome(10) << endl;
    }
}
#endif

#ifdef TEST13

#include "../include/13RomantoInteger.h"
TEST_CASE("_13RomantoInteger"){
    SECTION("91") {
        REQUIRE(romanToInt("III")==3);
    }
    SECTION("91") {
        REQUIRE(romanToInt("IV")==4);
    }
    SECTION("91") {
        REQUIRE(romanToInt("IX")==9);
    }
    SECTION("91") {
        REQUIRE(romanToInt("LVIII")==58);
    }
    SECTION("91") {
        REQUIRE(romanToInt("MCMXCIV")==1994);
    }
}
#endif


#ifdef TEST12

#include "../include/12IntegertoRoman.h"
TEST_CASE("12IntegertoRoman"){
    SECTION("_121"){
        string roma = intToRoman(3);
        cout << roma << endl;
        REQUIRE(roma.compare("III")==0);
    }

    SECTION("_122"){
        string roma = intToRoman(4);
        cout << roma << endl;
        REQUIRE(roma.compare("IV")==0);
    }

    SECTION("_123"){
        string roma = intToRoman(9);
        cout << roma << endl;
        REQUIRE(roma.compare("IX")==0);
    }

    SECTION("_124"){
        string roma = intToRoman(58);
        cout << roma << endl;
        REQUIRE(roma.compare("LVIII")==0);
    }

    SECTION("_125"){
        string roma = intToRoman(1994);
        cout << roma << endl;
        REQUIRE(roma.compare("MCMXCIV")==0);
    }
    SECTION("_126"){
        string roma = intToRoman(10);
        cout << roma << endl;
        REQUIRE(roma.compare("X")==0);
    }

    // intToRoma method 2
    SECTION("_127"){
        string roma = intToRoman2(3);
        cout << roma << endl;
        REQUIRE(roma.compare("III")==0);
    }

    SECTION("_128"){
        string roma = intToRoman2(4);
        cout << roma << endl;
        REQUIRE(roma.compare("IV")==0);
    }

    SECTION("_129"){
        string roma = intToRoman2(9);
        cout << roma << endl;
        REQUIRE(roma.compare("IX")==0);
    }

    SECTION("_1210"){
        string roma = intToRoman2(58);
        cout << roma << endl;
        REQUIRE(roma.compare("LVIII")==0);
    }

    SECTION("_1211"){
        string roma = intToRoman2(1994);
        cout << roma << endl;
        REQUIRE(roma.compare("MCMXCIV")==0);
    }
    SECTION("_1212"){
        string roma = intToRoman2(10);
        cout << roma << endl;
        REQUIRE(roma.compare("X")==0);
    }
}
#endif