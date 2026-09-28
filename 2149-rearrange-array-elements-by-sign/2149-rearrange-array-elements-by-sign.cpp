class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int > ans;
        vector<int > ans1;
        vector<int> ans2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans.push_back(nums[i]);
            }
            else{
                ans1.push_back(nums[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            ans2.push_back(ans1[i]);
            ans2.push_back(ans[i]);
        }
        return ans2;
    }
};