#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) 
    {
       int s1 = a.size()-1,s2 = b.size()-1;
       int i ;
       string ans= "";
       int carry =0;
       while(s1>=0 || s2>=0 || carry)
       {
         if(s1>=0)
         carry+=a[s1--] -'0';
         if(s2>=0)
         carry+=b[s2--] -'0';

         ans+=carry%2 +'0';
         carry = carry/2;
       } 
       reverse(ans.begin(),ans.end());
       return ans;
    }
};