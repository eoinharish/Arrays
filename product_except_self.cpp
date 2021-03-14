#include<bits/stdc++.h>
using namespace std;

//O(n^2) brute force
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> output(n,1);
       
        
        for(int j=0;j<output.size();j++)
        {
            int i=0;
            while(i<nums.size()){
                
                if(i!=j){
                output[j]*=nums[i];
                i++;
            }
            else{
                i++;
            }
        }
        }
        return output;
            
        
    }
};
int main()
{
    Solution s;
    vector<int> nums={4,5,1,8,2};
    vector<int>ans;
    ans=s.productExceptSelf(nums);

    for(int x:ans)
    {
        cout<<x<<" ";
    }
}