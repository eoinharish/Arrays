#include <iostream>
using namespace std;

int main() {
	
        int a[][6] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } };
        int row=3,col=6;
	    int left=0,right=col-1;
	    int up=0,down=row-1;
	    while(up<=down && left<=right)
	    {
	        for(int i=left;i<=right;i++)
	        {
	            cout<<a[up][i]<<" ";
	        }
	        up++;
	        
	        for(int i=up;i<=down;i++)
	        {
	            cout<<a[i][right]<<" ";
	        }
	        right--;
	        
	        if(up<=down){
	        for(int i=right;i>=left;i--)
	        {
	            cout<<a[down][i]<<" ";
	        }
	        down--;
	        }
	        
	        if(left<=right){
	        
	        for(int i=down;i>=up;i--)
	        {
	            cout<<a[i][left]<<" ";
	        }
	        left++;
	        }
	        
	    }
	
	return 0;
}