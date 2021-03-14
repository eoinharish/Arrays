#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={1,5,3,4,3,5,6};
    map<int,int>m;
    for(int i=0;i<7;i++)
    {
        m[a[i]]++;
    }
    int flag=0;
    for(int i=0;i<7;i++)
    {
        //printing the index of first number whose freq > 1
        if(m[a[i]]>1){
            flag=1;
            cout<<i<<endl;
            break;
        }
    }

    //No element with freq > 1
    if(flag==0)
        cout<<"-1"<<endl;
}