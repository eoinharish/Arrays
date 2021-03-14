#include<bits/stdc++.h>
using namespace std;

//Time complexity- O(n1+n2)
void merge(int a1[],int a2[],int n1,int n2,int a3[])
{
    int i=0,j=0,k=0;

    //traverse both arrays
    while(i<n1 && j<n2)
    {
        if(a1[i]>a2[j]){
            a3[k]=a2[j];
            j++;
            k++;
        }
        else{
            a3[k]=a1[i];
            i++;
            k++;
        }

    }
    //store remaining elements of first array
    while(i<n1){
        a3[k]=a1[i];
        k++;i++;
    }
    //store remaining elements of second array
    while(j<n2){
        a3[k]=a2[j];
        k++;j++;
   }

}
int main()
{
    int a1[]={5,8,9};
    int a2[]={4,7,8};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);

    int a3[n1+n2];
    merge(a1,a2,n1,n2,a3);
    for(int i=0;i<n1+n2;i++)
        cout<<a3[i]<<" ";

}
