//
// Created by zjp on 18-12-5.
//

#ifndef LEETCODE_125VALIDPALINDROME_H
#define LEETCODE_125VALIDPALINDROME_H

/***********************************
 * Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
                                                     只包含文字和数字
    Note: For the purpose of this problem, we define empty string as valid palindrome.

 * Input: "A man, a plan, a canal: Panama"
    Output: true

 * Input: "race a car"
    Output: false
 */
#include <string>

using namespace std;

//判断是否为字母
bool isAlpha(char c){
    if((c<='z'&&c>='a') || (c<='Z'&&c>='A'))
        return true;
    else
        return false;
}
//判断两个字母忽略大小写是否相等
bool isSameIgnoreUpDown(char a,char b){
    if(a==b || isAlpha(a)&&(a-'a'+'A'==b || a-'A'+'a'==b))
        return true;
    else
        return false;
}
//判断是否是数字或字母
bool isAlphanumeric(char c){
    if((c<='z'&&c>='a') || (c<='Z'&&c>='A') || (c<='9'&&c>='0'))
        return true;
    else
        return false;
}

bool isPalindrome(string s) {
    if(s.size()==0)
        return true;
    int l = 0, r = s.size()-1;
    while(l<r){
        while(l<=r&&!isAlphanumeric(s[l]))
            l++;
        while(l<=r&&!isAlphanumeric(s[r]))
            r--;
        if(isSameIgnoreUpDown(s[l],s[r])){
            l++;
            r--;
        } else
            break;
    }
    if(l>=r)
        return true;
    else
        return false;
}
#endif //LEETCODE_125VALIDPALINDROME_H

