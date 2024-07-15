#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &values)
    {
        int n = values.size();
        vector<vector<int>> dp(n+1, vector<int>(2, 0));
        dp[n][0] = 0;
        dp[n][1] = 0;

        for (int ind = n - 1; ind >= 0; ind--)
        {
            for (int buy = 0; buy <= 1; buy++)
            {
                int profit = 0;
                if (buy)
                {
                    profit = max(-values[ind] + dp[ind + 1][0], dp[ind + 1][1]);
                }
                else
                {
                    profit = max(values[ind] + dp[ind + 1][1], dp[ind + 1][0]);
                }

                dp[ind][buy] = profit;
            }
        }

        return dp[0][1];
    }
};