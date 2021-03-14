#include<bits/stdc++.h>
using namespace std;
//given n-1 numbers from 1 to n,find out the missing no.
//n<=10^7 ,ie, n can be very large
// sum of first n no. - sum of arr elements = missing no (but n can be huge)
//optimal solution is use XOR operation
/*0^0=0
  a^0=a
  0^a=a
  a^a=0
  */
int main()
{
    int a[]={1,2,3,5,6,7,8};
    int arrxor=0,totalxor=0;
    int l=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<l;i++)
    {
        arrxor=arrxor^a[i];
    }
    for(int i=0;i<l+1;i++)
    {
        totalxor=totalxor^i;

    }
    int res=totalxor^arrxor;
    cout<<res;


}