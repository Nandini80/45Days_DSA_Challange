#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) 
    {
       int n = haystack.size(),m = needle.size(),ini;
       for(int i=0 ; i<n ; i++)
       {
         if(haystack[i]==needle[0])
         {
            int j=0;
            ini = i;
            cout << "ini=" << i << endl;
            while(i<n && haystack[i]==needle[j])
            {
                i++,j++;
            }
            if(j==m) return ini;

            i = ini;
         }
       }
       return -1; 
    }
};