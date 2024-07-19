#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) 
    {
      int ans =INT_MIN;
      int i=0 ,j = 1;
      while(i<j && j<points.size())
      {
         long long int diff = (long long)points[j][0] - (long long)points[i][0];
         if(diff<=k)
         {
            long long int val = diff+(long long)points[i][1]+(long long)points[j][1];
            if(val> ans) ans = val;

            if(points[j][1]-points[i][1] > points[j][0]-points[i][0])
            i = j;

            j++;
         }
         else {
            if(j==i+1)
            {
                j++;
            }
            i++;
         }
      }

      return ans;  
    }
};