#include<bits/stdc++.h>
using namespace std;
//Time complexity using hash set O(n^2). space O(n)
bool findTriplets(int A[], int n)
{ 
    int curr_sum;
    int targetsum=0;
    for(int i=0;i<n-2;i++)
    {
        unordered_set<int>s;
        curr_sum=targetsum-A[i];
        for(int j=i+1;j<n;j++)
        {
            if(s.find(curr_sum-A[j])!=s.end())
            {
                return true;
            }
            s.insert(A[j]);
        }
        
    }
    return false;
}
//Below is solution for Time O(n^2) and space O(1)
/*
ol findTriplets(int A[], int n)
{ 
    int l;
    int r;
    sort(A,A+n);
    int sum=0;
    for(int i=0;i<n-2;i++)
    {
        l=i+1;
        r=n-1;
        while(l<r)
        {
            if(A[i]+A[l]+A[r]==sum)
            {
                return true;
            }
            else if(A[i]+A[l]+A[r]<sum)
            {
                l++;
            }
            else{
                r--;
            }
        }
    }
    return false;
}*/
int main()
{
    int a[]={0,-1,2,-3,1};
    int n=5;
    bool found=findTriplets(a,5);
    cout<<found;


}