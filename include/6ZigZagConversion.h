//
// Created by zjp on 18-12-17.
//

#ifndef LEETCODE_6ZIGZAGCONVERSION_H
#define LEETCODE_6ZIGZAGCONVERSION_H

/********************************
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this:
 * (you may want to display this pattern in a fixed font for better legibility)
 *  P   A   H   N
    A P L S I I G
    Y   I   R
 * And then read line by line: "PAHNAPLSIIGYIR"
 *
 * Input: s = "PAYPALISHIRING", numRows = 3
    Output: "PAHNAPLSIIGYIR"


 * Input: s = "PAYPALISHIRING", numRows = 4
    Output: "PINALSIGYAHRPI"
 *  P     I    N
    A   L S  I G
    Y A   H R
    P     I
 */
#include <string>
#include <memory.h>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

//计算最大可能多少列
int maxWidth(string s,int numRows){
    int len = s.size();
    return ceil((double)len/(double)(numRows+numRows-2))*(1+numRows-2);
}
string convert2(string s, int numRows) {
    if(s.size()<2||numRows==1)
        return s;
    const int width = maxWidth(s,numRows);
    char* explan = new char[numRows*width];
    memset(explan,'#',numRows*width);
    int i =0,j=0,k=0;
    while(k<s.size()){
        for(i=0;i<numRows&&k<s.size();i++){
            explan[i*width+j] = s[k++];
        }
        i--; //i最后一次不需要自增
        int temp = j;
        for(++j,--i;j<temp+numRows-1&&k<s.size();j++,i--){
            explan[i*width+j] = s[k++];
        }
    }
    string result;
    i =0;
    k=0;
    while(k<s.size()){
        if(explan[i]!='#'){
            result += explan[i++];
            k++;
        } else
            i++;
    }
    return result;
}

string convert(string s, int numRows) {
    if(numRows==1)
        return s;
    string result;
    const int a = numRows;
    const int b = s.size();
    vector<string> rows(min(a,b));
    bool goingDown = false;
    int curRow = 0;
    for(char c:s){
        rows[curRow] += c;

        if(curRow==0||curRow==numRows-1)
            goingDown = !goingDown;

        curRow += (goingDown)?1:-1;
    }
    for(string row : rows)
        result += row;

    return result;
}
#endif //LEETCODE_6ZIGZAGCONVERSION_H
