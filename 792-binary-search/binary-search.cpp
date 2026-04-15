class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid=nums.size()/2;
        int ans=-1;
        sort(nums.begin(),nums.end());
        while(low<=high){
            if(nums[mid]==target){
                ans=mid;
                break;
            }else if(target>nums[mid]){
                low=mid+1;
                mid=(low+high)/2;
            }else if(target<nums[mid]){
                high=mid-1;
                mid=(low+high)/2;
            }
        }
        return ans;
    }
};