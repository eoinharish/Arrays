#include<bits/stdc++.h>
using namespace std;

// Problem statement: Given an array, find out the maximum subarray sum

// Kadanes algorithm solves this problem in o(n) time
int main()
{
    int a[]={1,-3,2,1,-1};
    int n=sizeof(a)/sizeof(a[0]);
    
    //step 1: initialise 2 variables
    int localsum=a[0];
    int globalsum=a[0];

    /*step 2: running a loop from index 1 to end of array
            localsum = maximum(a[i],localsum+a[i])
            globalsum = maximum(globalsum,localsum)   */
    for(int i=1;i<n;i++)
    {
        localsum=max(a[i],localsum+a[i]);
        globalsum=max(localsum,globalsum);
    }
    cout<<globalsum;



}