class Solution {
public:
    int alternateDigitSum(int n) {
        int count=0;
        int ans=0;
        string p=to_string(n);
        reverse(p.begin(),p.end());
        int m=stoi(p);
        while(m!=0){
            if(count%2==0){
                ans+=m%10;
                count++;
            }else{
                ans-=m%10;
                count++;
            }
            m/=10;
        }
        return ans;
    }
};