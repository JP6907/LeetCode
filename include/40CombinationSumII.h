//
// Created by zjp on 18-12-27.
//

#ifndef LEETCODE_40COMBINATIONSUMII_H
#define LEETCODE_40COMBINATIONSUMII_H

/***********************************
 * Given a collection of candidate numbers (candidates) and a target number (target),
 * find all unique combinations in candidates where the candidate numbers sums to target.
    Each number in candidates may only be used once in the combination.

 * Note:
    All numbers (including target) will be positive integers.
    The solution set must not contain duplicate combinations.

 Input: candidates = [10,1,2,7,6,1,5], target = 8,
    A solution set is:
    [
      [1, 7],
      [1, 2, 5],
      [2, 6],
      [1, 1, 6]
    ]

 Input: candidates = [2,5,2,1,2], target = 5,
    A solution set is:
    [
      [1,2,2],
      [5]
    ]
 */

#include <vector>
#include <algorithm>
using namespace std;


void dfs(vector<int> candidates,vector<int> &current,int begin,int target,vector<vector<int>> &result){
    for(int i=begin;i<candidates.size();i++){
        if(candidates[i]==target){
            current.push_back(candidates[i]);
            result.push_back(current);
            current.pop_back();
            break;
        }else if(candidates[i]<target){
            if(i>begin&&candidates[i]==candidates[i-1])
                continue;
            current.push_back(candidates[i]);
            dfs(candidates,current,i+1,target-candidates[i],result);
            current.pop_back();
        }
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<int> currentVector;
    vector<vector<int>> result;
    sort(candidates.begin(),candidates.end());
    dfs(candidates,currentVector,0,target,result);
    return result;
}

#endif //LEETCODE_40COMBINATIONSUMII_H
