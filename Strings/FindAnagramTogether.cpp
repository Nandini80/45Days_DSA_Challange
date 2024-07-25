#include<iostream>
#include<vector>
#include <algorithm>
#include<unordered_map>
using namespace std;
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) 
    {
        vector<vector<string> > ans;
        int n = str.size();
        unordered_map<string,vector<string> > mp;
        for(int i=0 ; i<n; i++)
        {
            string word = str[i];
            sort(word.begin(),word.end());
            mp[word].push_back(str[i]);
        }
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};