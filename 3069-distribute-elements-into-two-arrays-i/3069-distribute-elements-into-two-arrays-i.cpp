class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(nums[0]);
    arr2.push_back(nums[1]); 
    for(int i=2;i<nums.size();i++){
        int arr1back=arr1.back();
        int arr2back=arr2.back();
        if(arr1back<arr2back){
            arr2.push_back(nums[i]);
        }else{
            arr1.push_back(nums[i]);
        }    
    }
    for(int j=0;j<arr2.size();j++){
        arr1.push_back(arr2[j]);
    }
    return arr1;
    }
};