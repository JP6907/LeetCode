//
// Created by zjp on 18-12-4.
//

#ifndef LEETCODE_127WORDLADDER_H
#define LEETCODE_127WORDLADDER_H

/******************************
 * Given two words (beginWord and endWord), and a dictionary's word list, find the length of shortest transformation sequence from beginWord to endWord, such that:

    Only one letter can be changed at a time.
    Each transformed word must exist in the word list. Note that beginWord is not a transformed word.

    Note:
    Return 0 if there is no such transformation sequence.
    All words have the same length.
    All words contain only lowercase alphabetic characters.
    You may assume no duplicates in the word list.
    You may assume beginWord and endWord are non-empty and are not the same.

 * Input:
    beginWord = "hit",
    endWord = "cog",
    wordList = ["hot","dot","dog","lot","log","cog"]

    Output: 5

    Explanation: As one shortest transformation is "hit" -> "hot" -> "dot" -> "dog" -> "cog",
return its length 5.

 * Input:
    beginWord = "hit"
    endWord = "cog"
    wordList = ["hot","dot","dog","lot","log"]

    Output: 0

 */
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <iostream>
using namespace std;

bool canTrandform(string s1,string s2){
    int cout = 0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i])
            cout++;
        if(cout>1)
            return false;
    }
    return true;
}
//BFS
int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    int len = 0;
    queue<string> q;
    set<string> words;  //未被访问

    for(string s:wordList)
        words.insert(s);

    q.push(beginWord);
    words.erase(beginWord);

    while(!q.empty()){
        int size = q.size();
        while(size--){
            string s = q.front();
            q.pop();
            if(s.compare(endWord)==0)
                return len+1;

            for(set<string>::iterator it = words.begin();it!=words.end();it++){
                if(canTrandform(*it,s)) {
                    q.push(*it);
                    words.erase(*it);
                }
            }
        }
        len++;
    }
    return 0;
}
#endif //LEETCODE_127WORDLADDER_H
