 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    vector<int>nums{4,5,6,1,2,3};
    int len=nums.size();
    if(len==0)
            cout<<-1;
    if(len==1){
        cout<<nums[0];
        }
        
    int left=0;
    int right=len-1;
        
    while(left<right)
    {
        int mid=left+(right-left)/2;
            
        if(nums[mid-1]>nums[mid] && mid>0)
                cout<<nums[mid];
        else if(nums[mid]>=nums[left] &&nums[mid]>nums[right])
        {
                left=mid+1;#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n+2];
	    for(int i=0;i<n+2;i++)
	    {
	        cin>>a[i];
	    }
	    int count[n+1];
	    for(int i=0;i<=n;i++)
	    {
	        count[i]=0;
	    }
	    for(int i=0;i<n+2;i++)
	    {
	        count[a[i]]++;
	    }
	    for(int i=0;i<=n;i++)
	    {
	        if(count[i]==2)
	            cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
        }
        else
        {
            right=mid-1;
        }
    }
    cout<<nums[left];
 }