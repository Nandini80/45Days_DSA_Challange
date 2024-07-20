#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) 
    {
        vector<string> stack;
        string current;
        
        for (int i = 0; i < path.size(); ++i) {
            if (path[i] == '/') 
            {
                if (!current.empty()) 
                {
                    if (current == "..") 
                    {
                        if (!stack.empty()) {
                            stack.pop_back();
                        }
                    } 
                    else if (current != ".") 
                    {
                        stack.push_back(current);
                    }
                    current.clear();
                }
            } 
            else 
            {
                current += path[i];
            }
        }
        
        // Handle the last part if not handled inside the loop
        if (!current.empty()) 
        {
            if (current == "..") {
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } else if (current != ".") {
                stack.push_back(current);
            }
        }
        
        string ans;
        for (const string& part : stack) {
            ans += "/" + part;
        }
        
        return ans.empty() ? "/" : ans;
    }
};