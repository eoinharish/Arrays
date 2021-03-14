#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>nums={4,5,1,8,2};
    int n=nums.size();
    vector<int>left_products(n);
    vector<int>right_products(n);
    vector<int>output_arr(n);
    left_products[0]=1;
    right_products[n-1]=1;
    for(int i=1;i<n;i++)
    {
        left_products[i]=nums[i-1]*left_products[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        right_products[i]=nums[i+1]*right_products[i+1];

    }
    for(int i=0;i<n;i++)
    {
        output_arr[i]=left_products[i]*right_products[i];
    }

    for(int x:output_arr)
    {
        cout<<x<<" ";
    }
}