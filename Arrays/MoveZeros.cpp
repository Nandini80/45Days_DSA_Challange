#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
      int j=0,n = nums.size(),i;
      for(i=0 ;i <n ; i++)
      {
        if(nums[i]!=0)
        {
            swap(nums[i],nums[j++]);
        }
      }
    }
};