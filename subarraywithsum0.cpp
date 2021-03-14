#include<bits/stdc++.h>
using namespace std;


//solve in O(n) or in O(nlogn) but sholud not in O(n^2)
//Below is O(n^2) solution
int main()
{
    int a[]={2,1,-3,4,2};
    int size=sizeof(a)/sizeof(a[0]);
    int sum,flag=0;
    for(int i=0;i<size;i++)
    {
        sum=0;
        for(int j=i;j<size;j++)
        {
            sum=sum+a[j];
            if(sum==0){
                cout<<"yes";
                flag=1;
                break;
            }

        }
        if(flag==1) break;
    }
    if(flag==0)
        cout<<"No";

}