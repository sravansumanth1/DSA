class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int count=0;
        int i=0;
        while(i<word.length()-1){
            int val=word[i]-word[i+1];
            if(val<0)val=-(val);
            if(val<=1){
                count++;
                i+=2;
            }else{
                i++;
            }
        }
        return count;
    }
};