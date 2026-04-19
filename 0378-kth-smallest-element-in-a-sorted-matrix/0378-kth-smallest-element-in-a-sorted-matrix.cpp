class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> arr;

        // put all elements into 1D array
        for(auto &row : matrix){
            for(auto &val : row){
                arr.push_back(val);
            }
        }

        // sort the array
        sort(arr.begin(), arr.end());

        return arr[k-1]; // kth smallest
    }
};