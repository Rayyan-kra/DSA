class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> num;

        for (int i = 0; i < nums.size(); i++) {
            int number = nums[i];          
            number = number * number;      
            num.push_back(number);
        }

        sort(num.begin(), num.end());      
        return num;                        
    }
};
