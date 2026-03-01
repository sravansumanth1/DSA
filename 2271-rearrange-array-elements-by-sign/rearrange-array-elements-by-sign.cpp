class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int pos=0;
        int neg=1;
        vector<int>ans(nums.size());
        while(i<nums.size()){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos+=2;
            }else{
                ans[neg]=nums[i];
                neg+=2;
            }
            i++;
        }
        return ans;
    }
};