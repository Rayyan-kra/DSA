class Solution {
public:
    int minMoves(vector<int>& nums) {
    int mini=INT_MAX;
    int total=0;
    int substract=0;
    for(int i=0;i<nums.size();i++){
        mini=min(nums[i],mini);
    }    
    for(int i=0;i<nums.size();i++){
        substract=nums[i]-mini;
        total=total+substract;
    }
    return total;
    }
};