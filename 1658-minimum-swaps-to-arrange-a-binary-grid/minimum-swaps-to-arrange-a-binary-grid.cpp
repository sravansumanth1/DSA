class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>ez;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]!=0){
                    break;
                }else{
                    count++;
                }
            }
            ez.push_back(count);
        }
        int steps=0;
        for(int i=0;i<n;i++){
            int need=n-i-1;
            int j=i;
            while(j<n&&ez[j]<need){
                j++;
            }
            if(j==n)return -1;
            steps+=j-i;
            while(j>i){
                swap(ez[j],ez[j-1]);
                j--;
            }
        }
        return steps;
    }
};