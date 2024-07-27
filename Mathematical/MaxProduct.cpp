#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        return max(a[n-1]*a[n-2]*a[n-3],a[n-1]*a[0]*a[1]);
    }
};