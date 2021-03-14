#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={2,3,-2,4};
    int curr_max_product=a[0];
    int curr_min_product=a[0];
    int prev_min_product=a[0];
    int prev_max_product=a[0];
    int ans=a[0];

    for(int i=1;i<4;i++)
    {
        curr_max_product=max(max(prev_max_product*a[i] , prev_min_product*a[i]), a[i] );
        curr_min_product=min(min(prev_max_product*a[i] , prev_min_product*a[i]), a[i] );
        ans=max(ans,curr_max_product);
        prev_max_product=curr_max_product;
        prev_min_product=curr_min_product;

    }
    cout<<ans;
}