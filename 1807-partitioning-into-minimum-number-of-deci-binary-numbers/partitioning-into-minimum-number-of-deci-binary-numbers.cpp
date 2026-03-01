class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(int i=0;i<n.length();i++){
            int val=n[i]-'0';
            ans=max(val,ans);
        }
        return ans;
    }
};