#include<bits/stdc++.h>

using namespace std;


//using O(N) time and O(N) space, N=max(n1,n2)  
//hence better than O(n1+n2)
int main()
{
    int a1[]={5,8,9};
    int n1=3,n2=3;
    int a2[]={4,7,8};
    map<int,bool>m;
    for(inti=0;i<n1;i++)
    {
        m[a1[i]]=true;
    }
    for(int i=0;i<n2;i++)
    {
        m[a2[i]]=true;
    }

    for(auto it:m)
        cout<<it->first<<" ";
}