#include<bits/stdc++.h>
using namespace std;


//using sets ,some extra space is required but time complexity is reduced from O(n^2) to O(n)
//insert,erase,find take O(1) time in unordered_set
int main()
{
    int a[]={2,1,3,-4,2};
    int size=sizeof(a)/sizeof(a[0]);
    unordered_set<int> s;
    int sum=0,flag=0;
    for(int i=0;i<size;i++)
    {
        s.insert(sum);
        sum+=a[i];
        if(s.find(sum)!= s.end()){     //s.find(sum-k)    if subarray sum=k
            cout<<"Yes";
            flag=1;
            break;
        }
        if(flag==1) break;

    }
    if(flag==0) cout<<"No";

}