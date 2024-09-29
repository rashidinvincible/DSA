
class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int step=0;
        int maxstep=INT_MIN;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
            step++;
            if(step>maxstep)
            maxstep=step;
            }
            else
            step=0;
        }
        return maxstep;
        
    }
};