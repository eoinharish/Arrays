#include <iostream>
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