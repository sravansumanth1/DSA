class Solution {
public:
    int minPartitions(string n) {
        int val=0;
        for(int i=0;i<n.length();i++){
            int val2=n[i]-'0';
            val=max(val2,val);
        }
        return val;
    }
};