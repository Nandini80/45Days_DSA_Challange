#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
       long long ans =INT_MAX;
       sort(a.begin(),a.end());
       for(int i=0 ;i <=n-m ; i++)
       {
        //   cout << "ans=" << a[i+m-1] << " " << a[i] << endl; 
           ans = min(ans,a[i+m-1]-a[i]);
        //   cout << "ans=" << ans << endl;
       }
       return ans;
    }   
};
