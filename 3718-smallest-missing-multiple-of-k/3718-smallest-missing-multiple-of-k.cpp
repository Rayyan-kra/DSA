class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int> table;
        int h=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size()+1;i++){
            h=k*i;
            table.push_back(h);
            bool found=false;
        for(int j=0;j<nums.size();j++){
            if(table[i-1]==nums[j]){
                found= true;
                break;
            }
        }
          if(found == false) {
                return table[i - 1];
            }
        }
        return -1;
    }
};