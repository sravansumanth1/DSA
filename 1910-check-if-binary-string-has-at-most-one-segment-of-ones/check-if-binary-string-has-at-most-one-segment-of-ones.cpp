class Solution {
public:
    bool checkOnesSegment(string s) {
        vector<int>v;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')v.push_back(i);
        }
        for(int i=1;i<v.size();i++){
            if((v[i]-v[i-1])>1)return false;
        }
        return true;
    }
};