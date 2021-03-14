#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={10,2,-2,-20,10};
    int k=-10;   //target sum of subarray = k
    unordered_map<int,int> m;         //{curr_sum,countofeachsum}
    int res=0;   //count of subarrs with sum = k
    int curr_sum=0;

    for(int i=0;i<5;i++)
    {
        curr_sum+=a[i];

         // If currsum is equal to desired sum, 
        // then a new subarray is found. So 
        // increase count of subarrays. 
        if(curr_sum==k)
            res++;

        // currsum exceeds given sum by currsum  
        //  - sum. Find number of subarrays having  
        // this sum and exclude those subarrays 
        // from currsum by increasing count by  
        // same amount.
        if(m.find(curr_sum-k) != m.end())
        {
            res=res+m[curr_sum-k];
        }

        // Add currsum value to count of  
        // different values of sum. 
        m[curr_sum]++;
    }
    cout<<res;
}