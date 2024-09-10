#include<bits/stdc++.h>
using namespacestd;

long long maxSubarraySum(vector<int> &arr) {
       
        long long currsum=0;
        long long maxi = LLONG_MIN;
        for(int i=0;i<arr.size();i++)
        {
            currsum+=arr[i];
            maxi = max(maxi,currsum);
            if(currsum<0)
            currsum=0;
        }
        return maxi;
    }