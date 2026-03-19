class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();

        vector<vector<int>> temp = arr; // copy

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(temp[i][j] == 0){
                    // set entire row
                    for(int k = 0; k < m; k++){
                        arr[i][k] = 0;
                    }
                    // set entire column
                    for(int k = 0; k < n; k++){
                        arr[k][j] = 0;
                    }
                }
            }
        }
    }
};