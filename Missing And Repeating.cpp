#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>ans;
        sort(arr.begin(),arr.end());
        stack<int>st;
        int minpos=1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                st.push(arr[i]);
                break;
                
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>0&&arr[i]==minpos)
            minpos++;
        }
        st.push(minpos);
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};