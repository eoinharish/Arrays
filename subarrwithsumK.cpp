#include<bits/stdc++.h>
using namespace std;

//we used extra space hashmap for better time complexity (O(n)
//Dry run on paper to under whole logic
int main()
{
    int a[]={1,4,20,3,10,5};
    int k=33;
    unordered_map<int,int> m;     // {curr_sum , index}   
    int curr_sum=0;
    for(int i=0;i<5;i++)
    {
        curr_sum+=a[i];
        if(curr_sum==k)
        {
            cout<<"sum is found bw indexes"<<0<<" to "<<i;
            return 0;
        }
        if(m.find(curr_sum-k) != m.end())
        {
            cout<<"sum is found bw indexes"<<m[curr_sum-k]+1<<" to "<<i;
            return 0;
        }

        m[curr_sum]=i;

    }
    cout<<"No subarray with that sum is found";
}
