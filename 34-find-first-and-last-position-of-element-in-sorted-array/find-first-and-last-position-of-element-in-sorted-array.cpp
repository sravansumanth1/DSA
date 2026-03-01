class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int val1=-1;
        int val2=-1;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        if(ans.size()!=0)return {ans[0],ans[ans.size()-1]};
        else return {-1,-1};
    }
};