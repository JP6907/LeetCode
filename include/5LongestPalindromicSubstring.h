//
// Created by zjp on 18-12-16.
//

#ifndef LEETCODE_5LONGESTPALINDROMICSUBSTRING_H
#define LEETCODE_5LONGESTPALINDROMICSUBSTRING_H

/*********************************************8
 * Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
 *
 * Input: "babad"
    Output: "bab"
    Note: "aba" is also a valid answer.

 * Input: "cbbd"
    Output: "bb"
 */
#include <string>
using namespace std;
//中心扩展法，从每个字符向两边扩展
int maxLength;
int low;

void extendPalindrome(string s,int left,int right){
    while(left>=0&&right<s.size()&&s[left]==s[right]){
        left--;
        right++;
    }
    if(right-left-1>maxLength) {
        maxLength = right - left - 1;
        low = left+1;
    }
}
string longestPalindrome(string s) {
    if(s.size()<2)
        return s;
    else{
        maxLength = 0;
        low = 0;
        for(int i=0;i<s.size();i++){
            extendPalindrome(s,i,i);
            extendPalindrome(s,i,i+1);
        }
        return s.substr(low,maxLength);
    }
}
#endif //LEETCODE_5LONGESTPALINDROMICSUBSTRING_H
