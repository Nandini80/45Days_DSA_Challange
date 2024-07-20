#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(const string& s, int left, int right)
    {
        while (left < right)
        {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s)
    {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right)
        {
            if (s[left] != s[right])
            {
                // by either skipping left or right it will be pal
               return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }
};