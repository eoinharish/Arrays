#include<bits/stdc++.h>
using namespace std;



//Time complexity O(n)
//if you use if condition inside for loop then more time is required.

int main()
{
    int a[]={0,1,1,0,1,2,1,2,0,0,0,1};
    int cnt0=0,cnt1=0,cnt2=0;

    for(int i=0;i<12;i++)
    {
        switch(a[i]){

            case 0:
                cnt0++;
                break;
            case 1:
                cnt1++;
                break;
            case 2:
                cnt2++;
                break;
        }
    }
    cout<<cnt0<<" "<<cnt1<<" "<<cnt2<<endl;

    int i=0;
    while(i<cnt0)
    {
        a[i]=0;
        i++;
    }
    
    while(i<cnt0+cnt1)
    {
        a[i]=1;
        i++;
    }
    while(i<cnt0+cnt1+cnt2)
    {
        a[i]=2;
        i++;
    }

    for(int x:a)
    cout<<x<<" ";
}