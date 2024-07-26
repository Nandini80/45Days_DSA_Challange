#include<iostream>
#include<vector>
#include <climits>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) 
    {
       if(t.size()>s.size()) return "";

       string ans = "";
       vector<int> mp(128,0);
       int count = t.size();
       for(int i=0 ;i <t.size() ; i++)
       mp[t[i]]++;

       int minStart=0,st=0,minLen=INT_MAX;

       for(int end=0 ; end<s.size() ;end++)
       {
          if(mp[s[end]]-- > 0) count--;
          
          while(count==0)
          {
            if(end-st+1<minLen)
            {
                minStart = st;
                minLen = end-st+1;
            }

            if(mp[s[st++]]++ == 0)count++;
          }
       }

       return minLen == INT_MAX ? "":s.substr(minStart,minLen); 
    }
};