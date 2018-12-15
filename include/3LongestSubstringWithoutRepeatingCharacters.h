//
// Created by zjp on 18-12-15.
//

#ifndef LEETCODE_3LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H
#define LEETCODE_3LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H

/*******************************
 * Given a string, find the length of the longest substring without repeating characters.
 *
 * Input: "abcabcbb"
    Output: 3
    Explanation: The answer is "abc", with the length of 3.

 * Input: "bbbbb"
    Output: 1
    Explanation: The answer is "b", with the length of 1.

 * Input: "pwwkew"
    Output: 3
    Explanation: The answer is "wke", with the length of 3.
                 Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
 */
#include <string.h>
#include <unordered_map>

using namespace std;

//使用滑动窗口的方法
int lengthOfLongestSubstring(string s) {
    int result = 0;
    int left = 0,right = 0;
    unordered_map<char,int> map;
    while(left<s.size()&&right<s.size()){
                               //left不会往回移动
        if(map.count(s[right])&&map[s[right]]>=left){//已经在窗口内
            left = map[s[right]] + 1;
            map[s[right]] = right;
            right++;
        }else{
            map[s[right]] = right;
            result = (right-left+1)>result?(right-left+1):result;
            right++;
        }
    }
    return result;
}
#endif //LEETCODE_3LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H
