#include<bits/stdc++.h>
using namespace std;

    void sort012(int a[], int n)
    {
        int left=0;
        int index=0;
        int left = 0;
        int right=n-1;
        while(index<=right)
        {
            if(a[index]==0)
            {
                swap(a[index],a[left]);
                left++;
                index++;
            }
            else if(a[index]==2)
            {
                swap(a[index],a[right]);
                right--;
            }
            else
            index++;
    }
    }
    

