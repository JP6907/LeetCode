//
// Created by zjp on 18-11-23.
//

#ifndef LEETCODE_459REPEATEDSUBSTRINGPATTERN_H
#define LEETCODE_459REPEATEDSUBSTRINGPATTERN_H

/*********************************************
 * Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.
 * You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.
 *
 * Input: "abab"
    Output: True
    Explanation: It's the substring "ab" twice.

 * Input: "aba"
    Output: False

 * Input: "abcabcabcabc"
    Output: True
    Explanation: It's the substring "abc" four times. (And the substring "abcabc" twice.)
 */
#include <string>
using namespace std;

bool repeatedSubstringPattern(string s) {
    if(s.size()==1)
        return false;
    else{
        bool result = false;
        for(int len=1;len<=s.size()/2;len++){
            int i=len,j=0;
            while(i<s.size()){
                if(j==len)
                    j = 0;
                if(s[j]==s[i]){
                    i++;
                    j++;
                }else
                    break;
            }
            if(i==s.size()&&j==len) {
                result = true;
                return result;
            }
        }
        return result;
    }
}
#endif //LEETCODE_459REPEATEDSUBSTRINGPATTERN_H
