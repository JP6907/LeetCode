//
// Created by zjp on 18-11-21.
//

#ifndef LEETCODE_7PALINDROMENUMBER_H
#define LEETCODE_7PALINDROMENUMBER_H

/**********************************
 * Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
 *
 * Input: 121
    Output: true

 * Input: -121
    Output: false
    Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

 * Coud you solve it without converting the integer to a string?
 *********************************/

bool isPalindrome(int x) {
    if(x<0)
        return false;
    if(x<10)
        return true;
    if(x%10==0)
        return false;
    int sum = 0;
    while(x>sum){
        sum = sum*10 + x%10;
        x /=10;
    }
    return (x==sum || sum/10==x);

}
#endif //LEETCODE_7PALINDROMENUMBER_H
