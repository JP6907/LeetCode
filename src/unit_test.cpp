#include "catch.h"

#include <iostream>

using namespace std;

#define TEST_TREENODEED

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
#define TEST27ED
#define TEST28ED

#define TEST35ED

#define TEST53ED

#define TEST58ED

#define TEST66ED
#define TEST67ED

#define TEST69ED
#define TEST70ED

#define TEST83ED

#define TEST88ED

#define TEST100ED
#define TEST101ED

#define TEST104ED

#define TEST110ED

#define TEST203ED
#define TEST459ED

#define TEST637



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


#ifdef TEST203

#include "203RemoveLinkedListElements.h"
TEST_CASE("203RemoveLinkedListElements"){
    SECTION("2031"){
        cout << "2031" << endl;
        ListNode* l = new ListNode(0);
        ListNode* p = l;
        int vals[] = {1,2,6,3,4,5,6};
        for(int v:vals){
            ListNode* node = new ListNode(v);
            p->next = node;
            p = p->next;
        }
        l = removeElements(l,6);
        while(l){
            cout << l->val << " ";
            l=l->next;
        }
        cout << endl;
    }
    SECTION("2032"){
        cout << "2032" << endl;
        ListNode* l = new ListNode(1);
        ListNode* p = l;
        int vals[] = {1};
        for(int v:vals){
            ListNode* node = new ListNode(v);
            p->next = node;
            p = p->next;
        }
        l = removeElements(l,1);
        while(l){
            cout << l->val << " ";
            l=l->next;
        }
        cout << endl;
    }
}

#endif


#ifdef TEST28

#include "28ImplementstrStr.h"
TEST_CASE("28ImplementstrStr"){
    SECTION("281"){
        string haystack = "hello";
        string needle = "ll";
        REQUIRE(strStr(haystack,needle)==2);
    }
    SECTION("282"){
        string haystack = "aaaaa";
        string needle = "bba";
        REQUIRE(strStr(haystack,needle)==-1);
    }
    SECTION("283"){
        string haystack = "";
        string needle = "bba";
        REQUIRE(strStr(haystack,needle)==-1);
    }
    SECTION("284"){
        string haystack = "a";
        string needle = "a";
        REQUIRE(strStr(haystack,needle)==0);
    }
    SECTION("285"){
        string haystack = "mississippi";
        string needle = "issi";
        REQUIRE(strStr(haystack,needle)==1);
    }
}

#endif


#ifdef TEST459

#include "459RepeatedSubstringPattern.h"
TEST_CASE("459RepeatedSubstringPattern"){
    SECTION("4591"){
        REQUIRE(repeatedSubstringPattern("abcabcabcabc")== true);
    }
    SECTION("4592"){
        REQUIRE(repeatedSubstringPattern("aba")== false);
    }
    SECTION("4593"){
        REQUIRE(repeatedSubstringPattern("abab")== true);
    }
    SECTION("4594"){
        REQUIRE(repeatedSubstringPattern("a")== false);
    }
    SECTION("4595"){
        REQUIRE(repeatedSubstringPattern("aabaaba")== false);
    }
}

#endif

#ifdef TEST35

#include "35SearchInsertPosition.h"
TEST_CASE("35SearchInsertPosition"){
    SECTION("351"){
        vector<int> nums = {1,3,5,6};
        REQUIRE(searchInsert(nums,5)==2);
    }
    SECTION("352"){
        vector<int> nums = {1,3,5,6};
        REQUIRE(searchInsert(nums,2)==1);
    }
    SECTION("353"){
        vector<int> nums = {1,3,5,6};
        REQUIRE(searchInsert(nums,7)==4);
    }
    SECTION("354"){
        vector<int> nums = {1,3,5,6};
        REQUIRE(searchInsert(nums,0)==0);
    }
    SECTION("355"){
        vector<int> nums = {1,3};
        REQUIRE(searchInsert(nums,1)==0);
    }
}

#endif


#ifdef TEST53

#include "53MaximumSubarray.h"
TEST_CASE("53MaximumSubarray"){
    SECTION("531"){
        vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
        REQUIRE(maxSubArray(nums)==6);
    }
    SECTION("532"){
        vector<int> nums = {};
        REQUIRE(maxSubArray(nums)==0);
    }
    SECTION("533"){
        vector<int> nums = {-1};
        REQUIRE(maxSubArray(nums)==-1);
    }
    SECTION("534"){
        vector<int> nums = {1,2,3,-2,7};
        REQUIRE(maxSubArray(nums)==11);
    }
    SECTION("535"){
        vector<int> nums = {1,2,3,-2};
        REQUIRE(maxSubArray(nums)==6);
    }
    //method 2
    SECTION("536"){
        vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
        REQUIRE(maxSubArray2(nums)==6);
    }
    SECTION("537"){
        vector<int> nums = {};
        REQUIRE(maxSubArray2(nums)==0);
    }
    SECTION("538"){
        vector<int> nums = {-1};
        REQUIRE(maxSubArray2(nums)==-1);
    }
    SECTION("539"){
        vector<int> nums = {1,2,3,-2,7};
        REQUIRE(maxSubArray2(nums)==11);
    }
    SECTION("5310"){
        vector<int> nums = {1,2,3,-2};
        REQUIRE(maxSubArray2(nums)==6);
    }
    SECTION("5311"){
        vector<int> nums = {-2,-1};
        REQUIRE(maxSubArray2(nums)==-1);
    }
    SECTION("5312"){
        vector<int> nums = {-1,-2};
        REQUIRE(maxSubArray2(nums)==-1);
    }
}

#endif



#ifdef TEST58

#include "58LengthofLastWord.h"

TEST_CASE("58LengthofLastWord"){
    SECTION("581"){
        string s = "sa asd hello";
        REQUIRE(lengthOfLastWord(s)==5);
    }
}

#endif

#ifdef TEST66

#include "66PlusOne.h"
TEST_CASE("66PlusOne"){
    SECTION("661"){
        vector<int> digits = {1,2,3};
        vector<int> v = plusOne(digits);
        for(int n : v)
            cout << n << " ";
        cout << endl;
    }
    SECTION("662"){
        vector<int> digits = {4,3,2,1};
        vector<int> v = plusOne(digits);
        for(int n : v)
            cout << n << " ";
        cout << endl;
    }
    SECTION("663"){
        vector<int> digits = {1};
        vector<int> v = plusOne(digits);
        for(int n : v)
            cout << n << " ";
        cout << endl;
    }
    SECTION("664"){
        vector<int> digits = {1,2,9};
        vector<int> v = plusOne(digits);
        for(int n : v)
            cout << n << " ";
        cout << endl;
    }
    SECTION("665"){
        vector<int> digits = {9};
        vector<int> v = plusOne(digits);
        for(int n : v)
            cout << n << " ";
        cout << endl;
    }
}

#endif


#ifdef TEST67

#include "67AddBinary.h"
TEST_CASE("67AddBinary"){
    SECTION("671"){
        string a = "11";
        string b = "1";
        string result = addBinary(a,b);
        REQUIRE(addBinary(a,b).compare("100")==0);
    }
    SECTION("672"){
        string a = "1010";
        string b = "1011";
        string result = addBinary(a,b);
        REQUIRE(addBinary(a,b).compare("10101")==0);
    }
}

#endif


#ifdef TEST69

#include "69Sqrt(x).h"
TEST_CASE("69Sqrt(x)"){
    SECTION("691"){
        REQUIRE(mySqrt(4)==2);
    }
    SECTION("692"){
        REQUIRE(mySqrt(8)==2);
    }
    SECTION("693"){
        REQUIRE(mySqrt(1)==1);
    }
    SECTION("693"){
        cout << mySqrt(2147395599);
    }
}

#endif


#ifdef TEST70

#include "70ClimbingStairs.h"
TEST_CASE("70ClimbingStairs"){
    SECTION("701"){
        REQUIRE(climbStairs(2)==2);
    }
    SECTION("702"){
        REQUIRE(climbStairs(3)==3);
    }
    SECTION("703"){
        cout << climbStairs(44);
    }

    //method 2
    SECTION("704"){
        REQUIRE(climbStairs2(2)==2);
    }
    SECTION("705"){
        REQUIRE(climbStairs2(3)==3);
    }
    SECTION("706"){
        REQUIRE(climbStairs2(44)==1134903170);
    }
}

#endif


#ifdef TEST83

#include "83RemoveDuplicatesfromSorted List.h"
TEST_CASE("83RemoveDuplicatesfromSorted"){
    SECTION("831"){
        int nums[] = {1,1,2,3,3};
        ListNode* head;
        ListNode* p;
        for(int n:nums){
            if(!head){
                head = new ListNode(n);
                p = head;
            }else{
                ListNode* node = new ListNode(n);
                p->next = node;
                p = p->next;
            }
        }

        head = deleteDuplicates(head);
        while(head){
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
    SECTION("832"){
        int nums[] = {1,1};
        ListNode* head;
        ListNode* p;
        for(int n:nums){
            if(!head){
                head = new ListNode(n);
                p = head;
            }else{
                ListNode* node = new ListNode(n);
                p->next = node;
                p = p->next;
            }
        }

        head = deleteDuplicates(head);
        while(head){
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
    SECTION("833"){
        int nums[] = {};
        ListNode* head;
        ListNode* p;
        for(int n:nums){
            if(!head){
                head = new ListNode(n);
                p = head;
            }else{
                ListNode* node = new ListNode(n);
                p->next = node;
                p = p->next;
            }
        }

        head = deleteDuplicates(head);
        while(head){
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
}

#endif


#ifdef TEST88

#include "88MergeSortedArray.h"
TEST_CASE("88MergeSortedArray"){
    SECTION("881"){
        vector<int> nums1 = {1,2,3,0,0,0};
        vector<int> nums2 = {2,5,6};
        merge(nums1,3,nums2,3);
        for(int n:nums1)
            cout << n << " ";
        cout << endl;
    }
    SECTION("882"){
        vector<int> nums1 = {0,0,0};
        vector<int> nums2 = {2,5,6};
        merge(nums1,0,nums2,3);
        for(int n:nums1)
            cout << n << " ";
        cout << endl;
    }
    SECTION("883"){
        vector<int> nums1 = {1,2,3,0,0,0};
        vector<int> nums2 = {};
        merge(nums1,3,nums2,0);
        for(int n:nums1)
            cout << n << " ";
        cout << endl;
    }
}

#endif


#ifdef TEST_TREENODE

#include "TreeNode.h"
TEST_CASE("TreeNode"){
    SECTION("1"){
        vector<int> nums = {1,INT32_MIN,3};
        TreeNode* tree = levelCreateTree(nums,0);
        printTree(tree);
    }
    SECTION("2"){
        vector<int> nums = {1,INT32_MIN,3,INT32_MIN,INT32_MIN,4,5};
        TreeNode* tree = levelCreateTree(nums,0);
        printTree(tree);
    }
}

#endif


#ifdef TEST100

#include "100SameTree.h"
#include "TreeNode.h"
TEST_CASE("100SameTree"){
    SECTION("1001") {
        vector<int> nums1 = {1, 2, 3};
        TreeNode *tree1 = levelCreateTree(nums1, 0);

        vector<int> nums2 = {1, INT32_MIN, 3};
        TreeNode *tree2 = levelCreateTree(nums2, 0);

        REQUIRE(isSameTree(tree1, tree2) == false);
    }
    SECTION("1002") {
        vector<int> nums1 = {1, 2, 3};
        TreeNode *tree1 = levelCreateTree(nums1, 0);

        vector<int> nums2 = {1, 2, 3};
        TreeNode *tree2 = levelCreateTree(nums2, 0);

        REQUIRE(isSameTree(tree1, tree2) == true);
    }
    SECTION("1003") {
        vector<int> nums1 = {1, 2, 1};
        TreeNode *tree1 = levelCreateTree(nums1, 0);

        vector<int> nums2 = {1, 1, 2};
        TreeNode *tree2 = levelCreateTree(nums2, 0);

        REQUIRE(isSameTree(tree1, tree2) == false);
    }

    //method2


    SECTION("1004") {
        vector<int> nums1 = {1, 2, 3};
        TreeNode *tree1 = levelCreateTree(nums1, 0);

        vector<int> nums2 = {1, INT32_MIN, 3};
        TreeNode *tree2 = levelCreateTree(nums2, 0);

        REQUIRE(isSameTree(tree1, tree2) == false);
    }
    SECTION("1005") {
        vector<int> nums1 = {1, 2, 3};
        TreeNode *tree1 = levelCreateTree(nums1, 0);

        vector<int> nums2 = {1, 2, 3};
        TreeNode *tree2 = levelCreateTree(nums2, 0);

        REQUIRE(isSameTree(tree1, tree2) == true);
    }
    SECTION("1006") {
        vector<int> nums1 = {1, 2, 1};
        TreeNode *tree1 = levelCreateTree(nums1, 0);

        vector<int> nums2 = {1, 1, 2};
        TreeNode *tree2 = levelCreateTree(nums2, 0);

        REQUIRE(isSameTree(tree1, tree2) == false);
    }
}

#endif


#ifdef TEST101

#include "101SymmetricTree.h"
TEST_CASE("101SymmetricTree"){
    SECTION("1011"){
        vector<int> nums = {1,2,2,3,4,4,3};
        TreeNode* tree = levelCreateTree(nums,0);
        REQUIRE(isSymmetric2(tree)==true);
    }
    SECTION("1012"){
        vector<int> nums = {1,2,2,INT32_MIN,3,INT32_MIN,3};
        TreeNode* tree = levelCreateTree(nums,0);
        REQUIRE(isSymmetric2(tree)==false);
    }
}

#endif


#ifdef TEST104

#include "104MaximumDepthofBinaryTree.h"
TEST_CASE("104MaximumDepthofBinaryTree"){
    SECTION("1041"){
        vector<int> nums = {3,9,20,INT32_MIN,INT32_MIN,15,7};
        TreeNode* tree = levelCreateTree(nums,0);
        REQUIRE(maxDepth(tree)==3);
    }
}

#endif


#ifdef TEST110

#include "110BalancedBinaryTree.h";
TEST_CASE("110BalancedBinaryTree"){
    SECTION("1101"){
        vector<int> nums = {3,9,20,INT32_MIN,INT32_MIN,15,7};
        TreeNode* tree = levelCreateTree(nums,0);
        REQUIRE(isBalanced(tree)==true);
    }
    SECTION("1102"){
        vector<int> nums = {1,2,2,3,3,INT32_MIN,INT32_MIN,4,4};
        TreeNode* tree = levelCreateTree(nums,0);
        REQUIRE(isBalanced(tree)==false);
    }
}

#endif


#ifdef TEST637

#include "637AverageofLevelsinBinaryTree.h"
TEST_CASE("637AverageofLevelsinBinaryTree"){
    SECTION("637"){
        vector<int> nums = {3, 9,20 ,INT32_MIN,INT32_MIN,15,7};
        TreeNode* tree = levelCreateTree(nums,0);
        vector<double> average = averageOfLevels(tree);
        for(double a : average)
            cout << a << " ";
        cout << endl;
    }
}

#endif