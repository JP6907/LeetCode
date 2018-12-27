//
// Created by zjp on 18-12-27.
//

#ifndef LEETCODE_39COMBINATIONSUM_H
#define LEETCODE_39COMBINATIONSUM_H

/*********************************
 * Given a set of candidate numbers (candidates) (without duplicates) and a target number (target),
 * find all unique combinations in candidates where the candidate numbers sums to target.
    The same repeated number may be chosen from candidates unlimited number of times.

 * Note:
    All numbers (including target) will be positive integers.
    The solution set must not contain duplicate combinations.

 Input: candidates = [2,3,6,7], target = 7,
    A solution set is:
    [
      [7],
      [2,2,3]
    ]

 Input: candidates = [2,3,5], target = 8,
    A solution set is:
    [
      [2,2,2,2],
      [2,3,3],
      [3,5]
    ]
 */
#include <vector>
using namespace std;

void dfs(vector<int> candidates,vector<int> &current,int begin,int target,vector<vector<int>> &result){
    for(int i=begin;i<candidates.size();i++){
        if(candidates[i]==target){
            current.push_back(candidates[i]);
            result.push_back(current);
            current.pop_back();
        }else if(candidates[i]<target){
            current.push_back(candidates[i]);
            dfs(candidates,current,i,target-candidates[i],result);
            current.pop_back();
        }
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> currentVector;
    vector<vector<int>> result;
    //getCombinationSum(candidates,currentVector,0,target);
    dfs(candidates,currentVector,0,target,result);
    return result;
}



#endif //LEETCODE_39COMBINATIONSUM_H
