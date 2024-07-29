#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        
        if (x == 0) {
            for (int i = 1; i < n; i++) {
                if (arr[i] == arr[i - 1]) {
                    return 1;
                }
            }
            return -1;
        }

        int i = 0, j = 1;

        while (i < n && j < n) 
        {
            if (i != j && abs(arr[j] - arr[i]) == x) 
            {
                return 1;
            } else if (arr[j] - arr[i] < x) {
                j++;
            } else {
                i++;
            }
        }
        return -1;
    }
};