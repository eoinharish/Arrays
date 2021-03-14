#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> a{8,12,16,4,0,20}; //distinct elements
   int k;
   cin>>k;
   set<int>s;
   for(int x:a)
    s.insert(x);

    int size=s.size();
    cout<<size<<endl;
    int count=0;
   
   for(int i=0;i<size;i++)
   {
       auto it=s.find(a[i]-k);
       if(it!=s.end())
       {
           count++;
        }
   }
   cout<<count;

}