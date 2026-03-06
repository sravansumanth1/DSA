class Solution {
public:
    int getval(int sv,int n,vector<int>&nums){
        vector<int>temp;
        for(int i=n;i<nums.size();i++){
            if(nums[i]!=0)
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int justl=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]>sv){
                justl=temp[i];
                break;
            }
        }
        int rval=0;
        for(int i=n;i<nums.size();i++){
            if(nums[i]==justl){
                rval=i;
                break;
            }
        }
        return rval;
    }
    void nextPermutation(vector<int>& nums) {
        int p=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                int val=getval(nums[i-1],i,nums);
                swap(nums[i-1],nums[val]);
                p=i;
                break;
            }
        }
        vector<int>temp;
        for(int i=p;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int k=0;
        for(int i=p;i<nums.size();i++){
            nums[i]=temp[k++];
        }
    }
};