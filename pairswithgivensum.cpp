#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[]={1,1,2,45,46,46};
   int k;
   cin>>k;
   set<int>s;
   for(int x:a)
      s.insert(x);
   int count=0;
   for(int i=0;i<s.size();i++)
   {
      auto it=s.find(k-a[i]);
      if(it!=s.end())
      {
         count++;
         s.erase(*it);
      }
   }
   cout<<count;
}