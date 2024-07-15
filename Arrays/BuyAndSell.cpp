#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
       int mini= INT_MAX;
       int i,n = prices.size(),ans =0;
       for(i=0 ; i<n ; i++) 
       {
         ans = max(ans,prices[i]-mini);
         mini = min(mini,prices[i]);
       }
       return ans;
    }
};