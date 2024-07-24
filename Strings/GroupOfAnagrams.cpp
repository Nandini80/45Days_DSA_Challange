#include<iostream>
#include<vector>
#include <algorithm>
#include<map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
         map<string,vector<string> > mp;
         for(auto it : strs)
         {
             string word = it;
             sort(word.begin() , word.end());
             mp[word].push_back(it);
         }
         vector<vector<string> > ans;
         for(auto it : mp)
         {
             ans.push_back(it.second);
         }
         return ans;
    }
};
