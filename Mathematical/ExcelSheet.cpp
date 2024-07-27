#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string convertToTitle(int col) {
        string result = "";
        while (col > 0) {
            col--; 
            int remainder = col % 26;
            result += ('A' + remainder);
            col /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
