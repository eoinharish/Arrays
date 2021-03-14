class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
            vector<int>v;
            v.push_back(findStartingIndex(nums,target));
            v.push_back(findEndingIndex(nums,target));
            return v;
    }
    int findStartingIndex(vector<int>& nums, int target){
        int index=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(target<=nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
            if(target==nums[mid]) index=mid;
        }
        
        return index;
        
    }
    int findEndingIndex(vector<int>& nums, int target){
        int index=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(target>=nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            if(target==nums[mid]) index=mid;
        }
        
        
        
        return index;
    }
};