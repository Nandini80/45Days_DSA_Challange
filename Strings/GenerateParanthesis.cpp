#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void GenAll(vector<string>& ans, string s, int n, int open, int close) {
        if (open == n && close == n) {
            ans.push_back(s);
            return;
        }

        // open
        if (open < n) {
            s += '(';
            GenAll(ans, s, n, open + 1, close);
            s.pop_back();  
        }

        // close
        if (close < open) {  
            s += ')';
            GenAll(ans, s, n, open, close + 1);
            s.pop_back();  
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        GenAll(ans, "", n, 0, 0);
        return ans;
    }
};