//
// Created by zjp on 18-12-12.
//

#ifndef LEETCODE_168EXCELSHEETCOLUMNTITLE_H
#define LEETCODE_168EXCELSHEETCOLUMNTITLE_H

/***************************************
 * Given a positive integer, return its corresponding column title as appear in an Excel sheet.

    For example:
    0  1 -> A
    1  2 -> B
    2  3 -> C
    ...
    25  26 -> Z
    26  27 -> AA
    27  28 -> AB
    ...

     Input: 1
    Output: "A"

     Input: 28
    Output: "AB"

     Input: 701
    Output: "ZY"

    实际上是一个26进制数
 */
#include <string>
using namespace std;

string convertToTitle(int n) {
    string result = "";
    while(n>0){
        n--;
        result.insert(result.begin(),(n%26 + 'A'));
        n/=26;
    }
    return result;
}
#endif //LEETCODE_168EXCELSHEETCOLUMNTITLE_H
