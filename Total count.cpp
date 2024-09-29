// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int sum=0;
       for(int i=0;i<arr.size();i++)
       {
           int digit=arr[i];
           int count=0;
           while(digit>k)
           {
           
           digit=digit-k;
           count++;
           }
           if(digit>0)
           {
               digit=digit-digit;
               count++;
           }
           sum+=count;
       }
       return sum;
    }
};