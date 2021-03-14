#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,2,3,4};
    int b[]={3,4,5,6};
    vector<int>v;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i]==b[j])
            v.push_back(a[i]);
        }
    }
    for(int x:v)
    cout<<x<<" ";

}