#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       int n = nums.size();
       vector<int> ans(n);
       int k=0,j=0;
       for(int i=0 ; i<n-1 ; i++)
       {
         if(nums[i]!=nums[i+1])
         {
            ans[j] = nums[i];
            j++;
            k++;
         }
       } 
       ans[j] = nums[n-1];
       k++;
       nums = ans;
       return k;
    }
};