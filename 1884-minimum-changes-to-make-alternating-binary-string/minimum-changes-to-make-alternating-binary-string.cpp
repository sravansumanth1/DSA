class Solution {
public:
    int minOperations(string s) {
        int count=0;
        int count2=0;
        for(int i=0;i<s.length();i++){
            if(i%2==0&&s[i]!='0')count++;
            else if(i%2!=0&&s[i]!='1')count++;
        }
        for(int i=0;i<s.length();i++){
            if(i%2==0&&s[i]!='1')count2++;
            else if(i%2!=0&&s[i]!='0')count2++;
        }
        return min(count,count2);
    }
};