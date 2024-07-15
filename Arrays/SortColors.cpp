#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
       int n = nums.size()-1;
       int m =0,l=0,u=n;
       while(m<=u)
       {
         if(nums[m]==0)
         {
            swap(nums[m],nums[l]);
            l++;
            m++;
         }
         else if(nums[m]==2)
         {
            swap(nums[m],nums[u]);
            u--;
         }
         else m++;
       } 
    }
};