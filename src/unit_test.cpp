#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include <iostream>

using namespace std;

#define TEST1ED
#define TEST7ED
#define TEST9ED
#define TEST12ED
#define TEST13ED
#define TEST14ED
#define TEST20ED
#define TEST21ED
#define TEST22ED
#define TEST26ED
#define TEST27



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


#ifdef TEST14

#include "../include/14LongestCommonPrefix.h"
TEST_CASE("14LongestCommonPrefix"){
    SECTION("_141"){
        vector<string> strs = {"flower","flow","flight"};
        cout << "longestCommonPrefix:" << longestCommonPrefix(strs) << endl;
    }
    SECTION("_142"){
        vector<string> strs = {"dog","racecar","car",""};
        cout << "longestCommonPrefix:" << longestCommonPrefix(strs) << endl;
    }

    //method2

    SECTION("_143"){
        vector<string> strs = {"flower","flow","flight"};
        cout << "longestCommonPrefix:" << longestCommonPrefix2(strs) << endl;
    }
    SECTION("_144"){
        vector<string> strs = {"dog","racecar","car",""};
        cout << "longestCommonPrefix:" << longestCommonPrefix2(strs) << endl;
    }
    SECTION("_145"){
        vector<string> strs = {"a"};
        cout << "longestCommonPrefix:" << longestCommonPrefix2(strs) << endl;
    }
    SECTION("_146"){
        vector<string> strs = {"aaa","aa","aaa"};
        cout << "longestCommonPrefix:" << longestCommonPrefix2(strs) << endl;
    }
}

#endif



#ifdef TEST20

#include "../include/20ValidParentheses.h"
TEST_CASE("20ValidParentheses"){
    SECTION("201"){
        REQUIRE(isValid("()")==true);
    }
    SECTION("202"){
        REQUIRE(isValid("()[]{}")==true);
    }
    SECTION("203"){
        REQUIRE(isValid("(]")==false);
    }
    SECTION("204"){
        REQUIRE(isValid("([)]")==false);
    }
    SECTION("205"){
        REQUIRE(isValid("{[]}")==true);
    }
    SECTION("206"){
        REQUIRE(isValid("")==true);
    }
    SECTION("207"){
        REQUIRE(isValid("]")==false);
    }
}
#endif


#ifdef TEST22

#include "../include/22GenerateParentheses.h"
TEST_CASE("22GenerateParentheses"){
    SECTION("221"){
        vector<string> res = generateParenthesis(3);
        for(string s:res)
            cout << s << endl;
    }
}

#endif


#ifdef TEST21

#include "../include/21MergeTwoSorted Lists.h"
TEST_CASE("21MergeTwoSorted"){
    SECTION("211"){
        ListNode* l1 = new ListNode(0);
        ListNode* l2 = new ListNode(0);
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        int data1[] = {1,2,4};
        int data2[] = {1,3,4};
        for(int d:data1){
            ListNode* node = new ListNode(d);
            p1->next = node;
            p1 = p1->next;
        }
        for(int d:data2){
            ListNode* node = new ListNode(d);
            p2->next = node;
            p2 = p2->next;
        }

        ListNode* merge = mergeTwoLists(l1,l2);
        ListNode* p = merge;
        while(p!=NULL){
            cout << p->val << "  ";
            p = p->next;
        }
    }
}

#endif



#ifdef TEST26

#include "26RemoveDuplicatesromSortedArray.h"
TEST_CASE("26RemoveDuplicatesromSortedArray"){
    SECTION("261"){
        vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
        int len = removeDuplicates(nums);
        REQUIRE(len == 5);
        for(int i=0;i<len;i++)
            cout << nums[i] << " ";
        cout << endl;
    }
    SECTION("262"){
        vector<int> nums = {1,1,2};
        int len = removeDuplicates(nums);
        REQUIRE(len == 2);
        for(int i=0;i<len;i++)
            cout << nums[i] << " ";
        cout << endl;
    }
    SECTION("263"){
        vector<int> nums = {};
        int len = removeDuplicates(nums);
        REQUIRE(len == 0);
        for(int i=0;i<len;i++)
            cout << nums[i] << " ";
        cout << endl;
    }
    SECTION("264"){
        vector<int> nums = {1};
        int len = removeDuplicates(nums);
        REQUIRE(len == 1);
        for(int i=0;i<len;i++)
            cout << nums[i] << " ";
        cout << endl;
    }
}

#endif


#ifdef TEST27

#include "27RemoveElement.h"
TEST_CASE("27RemoveElement"){
    SECTION("271"){
        vector<int> nums = {3,2,2,3};
        int len = removeElement(nums,3);
        REQUIRE(len == 2);
        for(int i=0;i<len;i++)
            cout << nums[i] << " ";
        cout << endl;
    }
    SECTION("272"){
        vector<int> nums = {0,1,2,2,3,0,4,2};
        int len = removeElement(nums,2);
        REQUIRE(len == 5);
        for(int i=0;i<len;i++)
            cout << nums[i] << " ";
        cout << endl;
    }
}

#endif