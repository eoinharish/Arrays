#include<bits/stdc++.h>
using namespace std;
 //Beautiful approach (in ques it is given that the rows are in sorted order and contains only 0's and 1's)
int main()
{
    int n=4,m=4;
    int a[n][m]={
        {0,1,1,1},
        {0,0,1,1},
        {1,1,1,1},
        {0,0,0,0}
    };

    int row=0;
    int i=0;
    int j=m-1;
    while(i<n && j>=0)
    {
        if(a[i][j]==1)
        {
            row=i;
            j--;
        }
        else{
            i++;
        }
    }
    cout<<row;  //row with max 1's

}