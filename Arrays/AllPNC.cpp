#include<iostream>
#include<vector>
#include <algorithm>
#include<set>
using namespace std;
class Solution {
public:
    void AllPNC(set<vector<int>> &unique_perms, vector<int> &current, vector<bool> &used, vector<int> &arr, int n) {
        if (current.size() == n) {
            unique_perms.insert(current);
            return;
        }
        for (int i = 0; i < n; ++i) {
            if (!used[i]) {
                used[i] = true;
                current.push_back(arr[i]);
                AllPNC(unique_perms, current, used, arr, n);
                current.pop_back();
                used[i] = false;
            }
        }
    }

    vector<vector<int>> uniquePerms(vector<int> &arr, int n) {
        set<vector<int>> unique_perms;
        vector<int> current;
        vector<bool> used(n, false);
        AllPNC(unique_perms, current, used, arr, n);
        vector<vector<int>> result(unique_perms.begin(), unique_perms.end());
        return result;
    }
};