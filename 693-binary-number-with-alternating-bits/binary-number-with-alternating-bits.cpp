class Solution {
public:
    bool hasAlternatingBits(int n) {
        string temp="";
        while(n!=0){
            temp+=n%2+'0';
            n/=2;
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<temp.length();i++){
            if(i%2==0&&temp[i]!='1'){
                return false;
            }else if(i%2!=0&&temp[i]!='0'){
                return false;
            }
        }
        return true;
    }
};