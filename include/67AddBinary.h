//
// Created by zjp on 18-11-24.
//

#ifndef LEETCODE_67ADDBINARY_H
#define LEETCODE_67ADDBINARY_H

/*****************************
 * Given two binary strings, return their sum (also a binary string).

    The input strings are both non-empty and contains only characters 1 or 0.

 * Input: a = "11", b = "1"
    Output: "100"

 * Input: a = "1010", b = "1011"
    Output: "10101"
 */

#include <string>
using namespace std;

string addBinary(string a, string b) {
    int i = a.size()-1;
    int j = b.size()-1;
    string result = "";
    int c = 0; //进位
    for(;i>=0||j>=0||c==1;i--,j--){
        c+= (i>=0)?a[i]-'0':0;
        c+= (j>=0)?b[j]-'0':0;
        result.insert(0,1,(c%2+'0'));
        c/=2;
    }
    return result;
}
#endif //LEETCODE_67ADDBINARY_H
