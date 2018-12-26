//
// Created by zjp on 18-12-10.

#include "catch.h"
#include <iostream>

using namespace std;

#define TEST2ED
#define TEST3ED
#define TEST5ED
#define TEST6ED
#define TEST8ED
#define TEST11ED
#define TEST15ED
#define TEST29
#define TEST125ED
#define TEST136ED
#define TEST137ED
#define TEST141ED
#define TEST142ED

#define TEST155ED
#define TEST160ED
#define TEST167ED
#define TEST168ED
#define TEST169ED


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


#ifndef TEST141ED

#include "141LinkedListCycle.h"
TEST_CASE("141LinkedListCycle"){
    SECTION("1411"){
        vector<int> nums = {3,2,0,-4};
        ListNode* node = createLinkedList(nums);
        createCircle(node,1);
        REQUIRE(hasCycle(node)==true);
    }
    SECTION("1412"){
        vector<int> nums = {1,2};
        ListNode* node = createLinkedList(nums);
        createCircle(node,0);
        REQUIRE(hasCycle(node)==true);
    }
    SECTION("1413"){
        vector<int> nums = {1};
        ListNode* node = createLinkedList(nums);
        createCircle(node,-1);
        REQUIRE(hasCycle(node)==false);
    }
}

#endif

#ifndef TEST142ED

#include "142LinkedListCycleII.h"
TEST_CASE("142LinkedListCycleII"){
    SECTION("1421"){
        vector<int> nums = {3,2,0,-4};
        ListNode* node = createLinkedList(nums);
        createCircle(node,1);
        REQUIRE(detectCycle(node)->val==2);
    }
}
#endif


#ifndef TEST155ED

#include "155MinStack.h"
TEST_CASE("155MinStack"){
    SECTION("1551"){
        MinStack* minStack = new MinStack();
        minStack->push(-2);
        minStack->push(0);
        minStack->push(-3);
        REQUIRE(minStack->getMin()==-3);
        minStack->pop();
        REQUIRE(minStack->top()==0);
        REQUIRE(minStack->getMin()==-2);
    }
    SECTION("1552"){
        MinStack* minStack = new MinStack();
        minStack->push(0);
        minStack->push(1);
        minStack->push(0);
        REQUIRE(minStack->getMin()==0);
        minStack->pop();
        REQUIRE(minStack->getMin()==0);
    }
}

#endif


#ifndef TEST160ED

#include "160IntersectionofTwoLinkedLists.h"
TEST_CASE("160IntersectionofTwoLinkedLists"){
    SECTION("1601"){
        vector<int> nums1 = {1,3,5,7,9};
        ListNode* listA = createLinkedList(nums1);
        vector<int> nums2 = {10,11,12,13};
        ListNode* listB = createLinkedList(nums2);
        ListNode* temp = listB;
        while(temp->next)
            temp = temp->next;
        temp->next = listA->next->next;
        REQUIRE(getIntersectionNode(listA,listB)->val==5);
    }
}

#endif

#ifndef TEST167ED

#include "167TwoSumII.h"
TEST_CASE("167TwoSumII"){
    SECTION("1671"){
        vector<int> nums = {2,7,11,15};
        int target = 9;
        vector<int> result = twoSum(nums,target);
        cout << result[0] << " " << result[1] << endl;
    }
}
#endif

#ifndef TEST168ED

#include "168ExcelSheetColumnTitle.h"
TEST_CASE("168ExcelSheetColumnTitle"){
    SECTION("1681"){
        REQUIRE(convertToTitle(1)=="A");
    }
    SECTION("1682"){
        REQUIRE(convertToTitle(28)=="AB");
    }
    SECTION("1683"){
        REQUIRE(convertToTitle(701)=="ZY");
    }
}
#endif

#ifndef TEST169ED

#include "169MajorityElement.h"
TEST_CASE("169MajorityElement"){
    SECTION("1691"){
        vector<int> nums = {3,2,3};
        REQUIRE(majorityElement(nums)==3);
    }
    SECTION("1692"){
        vector<int> nums = {2,2,1,1,1,2,2};
        REQUIRE(majorityElement(nums)==2);
    }
    SECTION("1693"){
        vector<int> nums = {-1,1,1,1,2,1};
        REQUIRE(majorityElement(nums)==1);
    }
    SECTION("1694"){
        vector<int> nums = {-1,1,1,1,2,2147483647,1};
        REQUIRE(majorityElement(nums)==1);
    }

}
#endif

#ifndef TEST2ED

#include "2AddTwoNumbers.h"
TEST_CASE("2AddTwoNumbers"){
    SECTION("21"){
        vector<int> num1 = {2,4,3};
        vector<int> num2 = {5,6,4};
        ListNode* l1 = createLinkedList(num1);
        ListNode* l2 = createLinkedList(num2);
        ListNode* sum = addTwoNumbers(l1,l2);
        printLinkedList(sum);
    }
    SECTION("22"){
        vector<int> num1 = {5};
        vector<int> num2 = {5};
        ListNode* l1 = createLinkedList(num1);
        ListNode* l2 = createLinkedList(num2);
        ListNode* sum = addTwoNumbers(l1,l2);
        printLinkedList(sum);
    }
}

#endif

#ifndef TEST3ED

#include "3LongestSubstringWithoutRepeatingCharacters.h"
TEST_CASE("3LongestSubstringWithoutRepeatingCharacters"){
    SECTION("31"){
        REQUIRE(lengthOfLongestSubstring("abcabcbb")==3);
    }
    SECTION("32"){
        REQUIRE(lengthOfLongestSubstring("bbbbb")==1);
    }
    SECTION("33"){
        REQUIRE(lengthOfLongestSubstring("pwwkew")==3);
    }
    SECTION("34"){
        REQUIRE(lengthOfLongestSubstring("tmmzuxt")==5);
    }
}

#endif


#ifndef TEST5ED

#include "5LongestPalindromicSubstring.h"
TEST_CASE("5LongestPalindromicSubstring"){
    SECTION("51"){
        REQUIRE(longestPalindrome("babad")=="bab");
    }
    SECTION("52"){
        REQUIRE(longestPalindrome("cbbd")=="bb");
    }
}

#endif

#ifndef TEST6ED
#include "6ZigZagConversion.h"
TEST_CASE("6ZigZagConversion"){
    SECTION("61"){
        REQUIRE(convert("PAYPALISHIRING",3)=="PAHNAPLSIIGYIR");
    }
    SECTION("62"){
        REQUIRE(convert("PAYPALISHIRING",4)=="PINALSIGYAHRPI");
    }
    SECTION("63"){
        REQUIRE(convert("AB",1)=="AB");
    }
}
#endif

#ifndef TEST8ED

#include "8StringtoInteger(atoi).h"
TEST_CASE("8StringtoInteger"){
    cout << INT32_MAX << endl;
    cout << INT32_MIN << endl;
    SECTION("81"){
        REQUIRE(myAtoi("42")==42);
    }
    SECTION("82"){
        REQUIRE(myAtoi("   -42")==-42);
    }
    SECTION("83"){
        REQUIRE(myAtoi("4193 with words")==4193);
    }
    SECTION("84"){
        REQUIRE(myAtoi("2147483648")==INT32_MAX);
    }
    SECTION("85"){
        REQUIRE(myAtoi("-2147483648")==INT32_MIN);
    }
    SECTION("86"){
        REQUIRE(myAtoi("-2147483649")==INT32_MIN);
    }
    SECTION("87"){
        REQUIRE(myAtoi("-91283472332")==INT32_MIN);
    }
    SECTION("88"){
        REQUIRE(myAtoi("-2147483647")==-2147483647);
    }
}
#endif

#ifndef TEST15ED

#include "15 3Sum.h"
TEST_CASE("15 3Sum"){
    SECTION("151"){
        vector<int> nums = {-1, 0, 1, 2, -1, -4};
        vector<vector<int>> result = threeSum(nums);
        for(vector<int> v:result){
            for(int n:v)
                cout << n << " ";
            cout << endl;
        }
    }
    SECTION("152"){
        vector<int> nums = {0,0,0,0};
        vector<vector<int>> result = threeSum(nums);
        for(vector<int> v:result){
            for(int n:v)
                cout << n << " ";
            cout << endl;
        }
    }
}
#endif


#ifndef TEST11ED

#include "11ContainerWithMostWater.h"
TEST_CASE("11ContainerWithMostWater"){
    SECTION("111"){
        vector<int> nums = {1,8,6,2,5,4,8,3,7};
        REQUIRE(maxArea(nums)==49);
    }
}
#endif

#ifndef TEST29ED

#include "29DivideTwoIntegers.h"
TEST_CASE("29DivideTwoIntegers"){
    SECTION("291"){
        REQUIRE(divide(10,3)==3);
        REQUIRE(divide(7,-3)==-2);
        REQUIRE(divide(1,1)==1);
        REQUIRE(divide(INT32_MAX,1)==INT32_MAX);
        REQUIRE(divide(INT32_MIN,-1)==INT32_MAX); //溢出情况
        REQUIRE(divide(INT32_MIN,1)==INT32_MIN); //溢出情况
    }
}
#endif