#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,-1,2,-2,6,-6};
    unordered_map<int,int> m;
    int sum=0;
    for(int x:a)
    {
        sum+=x;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->second<<" ";
    }
}