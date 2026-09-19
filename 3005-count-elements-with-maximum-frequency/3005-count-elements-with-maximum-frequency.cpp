class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int,int> mpp;
    int n=nums.size();
    int count =0;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }    
    int maxi=0;

    for(int i=0;i<n;i++){
        maxi=max(maxi,mpp[nums[i]]);
    }
    for(int i=0;i<n;i++){
        if(maxi==mpp[nums[i]]){
            count++;
        }
    }
    return count;
    }
};