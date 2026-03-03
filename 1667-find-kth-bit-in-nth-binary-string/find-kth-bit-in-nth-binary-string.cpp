class Solution {
public:
    string invert(string& s){
        string s1="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')s1+='1';
            else s1+='0';
        }
        return s1;
    }
    string reversed(string s){
        string temp=invert(s);
        reverse(temp.begin(),temp.end());
        return temp;
    }
    char findKthBit(int n, int k) {
        string s="";
        s+='0';
        for(int i=1;i<n;i++){
            s+='1'+reversed(s);
        }
        return s[k-1];
    }
};