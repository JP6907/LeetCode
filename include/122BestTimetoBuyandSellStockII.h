//
// Created by zjp on 18-12-4.
//

#ifndef LEETCODE_122BESTTIMETOBUYANDSELLSTOCKII_H
#define LEETCODE_122BESTTIMETOBUYANDSELLSTOCKII_H

/***********************************************
 * Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

Note: You may not engage in multiple transactions at the same time (i.e., you must sell the stock before you buy again).

 *  Input: [7,1,5,3,6,4]
    Output: 7
    Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
                 Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.

 * Input: [1,2,3,4,5]
    Output: 4
    Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
                 Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are
                 engaging multiple transactions at the same time. You must sell before buying again.

 * Input: [7,6,4,3,1]
    Output: 0
    Explanation: In this case, no transaction is done, i.e. max profit = 0.
 */
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    if(prices.size()<=1)
        return 0;
    int maxPro = 0;
    for(int i=1;i<prices.size();i++){
        int temp = prices[i]-prices[i-1];
        if(temp>0)
            maxPro+=temp;
    }
    return maxPro;
}

/**
 * 1. Calculate prices[i+1]-prices[i]

   2. Turn the array prices[] = [1,2,4,2,5,7,2,4,9,0] into
      difference[] = [+1,+2,-2,+3,+2,-5,+2,+5,-9]

   3. Then add all positive numbers sum = 1+2+3+2+2+5 = 15 in difference
   4. Return 15

    The code is a simplified and optimized version.
 */
#endif //LEETCODE_122BESTTIMETOBUYANDSELLSTOCKII_H
