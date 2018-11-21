//
// Created by zjp on 18-11-21.
//

#ifndef LEETCODE_12INTEGERTOROMAN_H
#define LEETCODE_12INTEGERTOROMAN_H

#include <string>
#include <map>

using namespace std;

/******************************
 * Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
 * Symbol       Value
    I             1
    V             5
    X             10
    L             50
    C             100
    D             500
    M             1000
 * For example, two is written as II in Roman numeral, just two one's added together.
 * Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

    Roman numerals are usually written largest to smallest from left to right.
    However, the numeral for four is not IIII. Instead, the number four is written as IV. B
    ecause the one is before the five we subtract it making four. T
    he same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

    I can be placed before V (5) and X (10) to make 4 and 9.
    X can be placed before L (50) and C (100) to make 40 and 90.
    C can be placed before D (500) and M (1000) to make 400 and 900.
 * Input: 3
    Output: "III"

 * Input: 4
    Output: "IV"

 I* nput: 9
Output: "IX"

 * Input: 58
    Output: "LVIII"
    Explanation: L = 50, V = 5, III = 3.

 * Input: 1994
    Output: "MCMXCIV"
    Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 */

string intToRoman(int num) {
    map<int,char> roma;
    roma.insert(pair<int,char>(1,'I'));
    roma.insert(pair<int,char>(5,'V'));
    roma.insert(pair<int,char>(10,'X'));
    roma.insert(pair<int,char>(50,'L'));
    roma.insert(pair<int,char>(100,'C'));
    roma.insert(pair<int,char>(500,'D'));
    roma.insert(pair<int,char>(1000,'M'));


    string result = "";
    if(num>=1000) {
        int thousandCout = num / 1000;
        result.append(thousandCout, roma.at(1000));
        num%=1000;
    }
    if(num>=100){
        int hundradCout = num/100;
        if(hundradCout==9) {
            result.append(&roma.at(100));
            result.append(&roma.at(1000));
        }else if(hundradCout>=5){
            result.append(&roma.at(500));
            result.append(hundradCout-5,roma.at(100));
        }else if(hundradCout==4){
            result.append(&roma.at(100));
            result.append(&roma.at(500));
        }else{
            result.append(hundradCout,roma.at(100));
        }
        num%=100;
    }
    if(num>=10){
        int tenCout = num/10;
        if(tenCout==9) {
            result.append(&roma.at(10));
            result.append(&roma.at(100));
        }else if(tenCout>=5){
            result.append(&roma.at(50));
            result.append(tenCout-5,roma.at(10));
        }else if(tenCout==4){
            result.append(&roma.at(10));
            result.append(&roma.at(50));
        }else{
            result.append(tenCout,roma.at(10));
        }
        num%=10;
    }
    if(num>0){
        if(num==9){
            result.append(&roma.at(1));
            result.append(&roma.at(10));
        }else if(num>=5){
            result.append(&roma.at(5));
            result.append(num-5,roma.at(1));
        }else if(num==4){
            result.append(&roma.at(1));
            result.append(&roma.at(5));
        }else{
            result.append(num,roma.at(1));
        }
    }
    return result;
}

const string THOUS[] = {"","M","MM","MMM"};
const string HUNDS[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
const string TENS[]	= {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
const string ONES[]	= {"","I","II","III","IV","V","VI","VII","VIII","IX"};

string intToRoman2(int num){
    string result;
    result += THOUS[(num/1000)%10];
    result += HUNDS[(num/100)%10];
    result += TENS[(num/10)%10];
    result += ONES[num%10];
    return result;
}


#endif //LEETCODE_12INTEGERTOROMAN_H
