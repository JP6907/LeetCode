//
// Created by zjp on 18-11-23.
//

#ifndef LEETCODE_28IMPLEMENTSTRSTR_H
#define LEETCODE_28IMPLEMENTSTRSTR_H


/**********************************
 * Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
 *
 * Input: haystack = "hello", needle = "ll"
    Output: 2

 * Input: haystack = "aaaaa", needle = "bba"
    Output: -1

 * What should we return when needle is an empty string? This is a great question to ask during an interview.

    For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
 */

#include <string>

using namespace std;

const int ASCII_SIZE = 126;

//Horspool
void getDis(string str, int *move) {
    int len = str.size();
    for (int i = 0; i < ASCII_SIZE; i++)
        move[i] = len;
    for (int i = 0; i < len - 1; i++)
        move[str[i]] = len - 1 - i;
}

int strStr(string haystack, string needle) {
    if (needle.length() == 0)
        return 0;
    else if (haystack.length() == 0)
        return -1;

    int *move = (int *) malloc(ASCII_SIZE * sizeof(int));
    getDis(needle, move);
    int hSize = haystack.length();
    int nSize = needle.length();
    int pos = 0;
    int j = 0;
    while (pos <= hSize - nSize) {
        j = nSize - 1;
        while (j >= 0 && haystack[pos + j] == needle[j])
            j--;
        if (j == -1)
            return pos;
        else
            pos = pos + move[haystack[pos + nSize - 1]];
    }
    return -1;
}

#endif //LEETCODE_28IMPLEMENTSTRSTR_H
