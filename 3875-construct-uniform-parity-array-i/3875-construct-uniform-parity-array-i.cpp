class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    int n=nums1.size()-1;
    vector<int> nums2;
    int sum=0;
    for(int i=0;i<n;i++){
        if(nums1[i]%2==0){
            nums2.push_back(nums1[i]);
        }
        else{
            sum=nums1[i]-nums1[i+1];
            nums2.push_back(sum);
        }
    }    
    for(int j=0;j<n;j++){
        if(nums2[j]%2==0){
            return true;
        }
        else{
            return true;
        }
    }
    return true;
    }
};