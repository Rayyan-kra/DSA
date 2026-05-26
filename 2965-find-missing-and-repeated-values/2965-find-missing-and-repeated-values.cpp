class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();

        vector<int> arr;

        // convert 2D -> 1D
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                arr.push_back(grid[i][j]);
            }
        }

        sort(arr.begin(), arr.end());

        int repeat = -1;
        int missing = -1;

        // find repeated
        for(int i = 0; i < arr.size() - 1; i++) {
            if(arr[i] == arr[i + 1]) {
                repeat = arr[i];
                break;
            }
        }

        // find missing
        for(int i = 1; i <= n * n; i++) {
            if(!binary_search(arr.begin(), arr.end(), i)) {
                missing = i;
                break;
            }
        }

        return {repeat, missing};
    }
};