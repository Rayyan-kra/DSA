class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int,int> mpp;
    int n =nums.size();
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    } vector<int> ans;

        for(auto j : mpp) {
            if(j.second > n / 3) {
                ans.push_back(j.first);
            }
        }

        return ans;
    }
};