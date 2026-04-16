class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=-1;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
                flag=true;
                break;
            }else if(nums[i]>target){
                ans=i;
                flag=true;
                break;
            }
        }
        if(flag==false){
            return nums.size();
        }
        return ans;
    }
};