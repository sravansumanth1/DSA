class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        // vector<int>ans;
        // int pp=0;
        // int np=0;
        // for(int i=0;i<nums.size();i++){
        //     if(i%2==0)ans.push_back(pos[pp++]);
        //     else ans.push_back(neg[np++]);
        // }
        vector<int>ans(nums.size());
        for(int i=0;i<(nums.size())/2;i++){
            ans[2*i]=pos[i];
            ans[2*i+1]=neg[i];
        }
        return ans;
    }
};