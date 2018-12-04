//
// Created by zjp on 18-12-4.
//

#ifndef LEETCODE_121BESTTIMETOBUYANDSELLSTOCK_H
#define LEETCODE_121BESTTIMETOBUYANDSELLSTOCK_H

/*******************************************
 * Say you have an array for which the ith element is the price of a given stock on day i.
    If you were only permitted to complete at most one transaction
    (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
    Note that you cannot sell a stock before you buy one.

 * Input: [7,1,5,3,6,4]
    Output: 5
    Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
                 Not 7-1 = 6, as selling price needs to be larger than buying price.

 * Input: [7,6,4,3,1]
    Output: 0
    Explanation: In this case, no transaction is done, i.e. max profit = 0.
 */

#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    if(prices.size()<=1)
        return 0;
    int maxProf = 0;
    int min = prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]-min>maxProf)
            maxProf = prices[i]-min;
        if(prices[i]<min)
            min = prices[i];
    }
    return maxProf;
}
#endif //LEETCODE_121BESTTIMETOBUYANDSELLSTOCK_H
