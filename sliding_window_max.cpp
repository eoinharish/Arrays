#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,3,-1,-3,5,3,6,7};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
    deque<int> Q(k);

    int i;    
    //Processing first k elements    
    for(i=0;i<k;i++)
    {
        while(!Q.empty() && a[i]>a[Q.back()]){
                Q.pop_back();
        }
        Q.push_back(i);
    }

    //Processing the remaining elements
    while(i<n)
    {
        cout<<a[Q.front()]<<" ";
        //remove the elements which are not the part of the window
        while(!Q.empty() && Q.front()<=i-k){
            Q.pop_front();
        }
        while(!Q.empty() && a[i]>a[Q.back()])
        {
            Q.pop_back();
        }
        Q.push_back(i);
        i++;
    }
    cout<<a[Q.front()];
}