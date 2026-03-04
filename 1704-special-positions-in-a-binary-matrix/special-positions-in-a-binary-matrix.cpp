class Solution {
public:
    bool isspecial(int i,int p,vector<vector<int>>& mat){
        for(int j=0;j<mat[0].size();j++){
            if(j!=p){
                if(mat[i][j]==1){
                return false;
            }
            }
        }
        for(int j=0;j<mat.size();j++){
            if(j!=i){
            if(mat[j][p]==1){
                return false;
            }
            }
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    if(isspecial(i,j,mat)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};