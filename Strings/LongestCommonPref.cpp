#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
       string s = strs[0];
       string ans = "";
       for(int i=1 ;i <strs.size() ; i++)
       {
          int ind =0;
          string a =strs[i];
          if(a=="")  return "";
          else 
          {
            while(ind<a.size() && ind<s.size() && s[ind]==a[ind])
            {
            ans+=s[ind];
            ind++;
            }
          }
         
          s = ans;
          ans = "";
       } 
       return s;
    }
};