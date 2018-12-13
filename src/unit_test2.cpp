//
// Created by zjp on 18-12-10.

#include "catch.h"
#include <iostream>

using namespace std;

#define TEST125ED
#define TEST136ED
#define TEST137ED
#define TEST141ED
#define TEST142ED

#define TEST155ED
#define TEST160ED
#define TEST167ED
#define TEST168ED
#define TEST169


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