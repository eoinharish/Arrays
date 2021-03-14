#include<bits/stdc++.h>
using namespace std;
// max sum of all the contiguous subarrays 
//Brute force approach O(n^2)
int main()
{
    int a[]={1,-3,2,1,-1};
    int sum;
	set<int>s;
	for(int i=0;i<5;i++)
	    {
	        sum=0;
	        for(int j=i;j<5;j++)
	        {
	            sum=sum+a[j];
	            s.insert(sum);
	            
	        }
	    }
	    cout<<*--s.end()<<endl;
}