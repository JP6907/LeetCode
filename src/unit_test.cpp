#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE unit_test

#include <iostream>

using namespace std;

#define TEST1ED
#define TEST7ED
#define TEST9ED
#define TEST13

#include <boost/test/unit_test.hpp>

#ifdef TEST1
#include "../include/1TwoSum.h"

BOOST_AUTO_TEST_CASE(_1){
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result = twoSum(nums,target);
    for(int a:result)
        cout << a << "  ";
}
#endif


#ifdef TEST7
#include "../include/7ReverseInteger.h"

BOOST_AUTO_TEST_CASE(_71){
    cout << reverse(123) << endl;
}
BOOST_AUTO_TEST_CASE(_72){
    cout << reverse(-123) << endl;
}
BOOST_AUTO_TEST_CASE(_73){
    cout << reverse(120) << endl;
}
BOOST_AUTO_TEST_CASE(_74){
    cout << reverse(90100) << endl;
}
BOOST_AUTO_TEST_CASE(_75){
    cout << reverse(1534236469) << endl;
    cout << reverse(1563847412) << endl;
}
#endif

#ifdef TEST9

#include "../include/9PalindromeNumber.h"
BOOST_AUTO_TEST_CASE(_9){
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(-121) << endl;
    cout << isPalindrome(10) << endl;
}
#endif

#ifdef TEST13

#include "../include/13RomantoInteger.h"
BOOST_AUTO_TEST_CASE(twoSum){
    cout << romanToInt("III") << endl;
    cout << romanToInt("IV") << endl;
    cout << romanToInt("IX") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;
}
#endif
