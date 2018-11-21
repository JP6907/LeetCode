//
// Created by zjp on 18-11-21.
//

#ifndef LEETCODE_14_LONGESTCOMMONPREFIX_H
#define LEETCODE_14_LONGESTCOMMONPREFIX_H

/***************************************
 * Write a function to find the longest common prefix string amongst an array of strings.

    If there is no common prefix, return an empty string "".

 * Input: ["flower","flow","flight"]
    Output: "fl"

 * Input: ["dog","racecar","car"]
    Output: ""
    Explanation: There is no common prefix among the input strings.
 */

#include <string>
#include <vector>
using namespace std;

string LCP(string s1,string s2){
    string prex = "";
    for(int i=0;i<s1.length()&&i<s2.length();i++){
        if(s1[i]==s2[i])
            prex+=s1[i];
        else
            break;
    }
    return prex;
}
string longestCommonPrefix(vector<string>& strs) {
    if(strs.size()==0)
        return "";
    else{
        string prex = strs[0];
        for(int i=1;i<strs.size();i++){
            prex = LCP(prex,strs[i]);
        }
        return prex;
    }
}

string longestCommonPrefix2(vector<string>& strs) {
    if(strs.size()==0)
        return "";
    else if(strs.size()==1)
        return strs[0];
    else{
        string prex = "";
        //判断每一列是否相同
        bool equal = true;
        int col = 0;
        while(equal&&col<strs[0].length()){
            for(int i=1;i<strs.size();i++){
                if(strs[i].length()<col+1) {
                    equal = false;
                    break;
                }
                else if(strs[i][col]!=strs[0][col]) {
                    equal = false;
                    break;
                }
                else if(i==strs.size()-1){
                    prex+=strs[0][col];
                    col++;
                }
            }
        }
        return prex;
    }
}
#endif //LEETCODE_14_LONGESTCOMMONPREFIX_H
