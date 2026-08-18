class Solution { 
public: 
    int largestInteger(vector<int>& nums, int k) { 
        unordered_map<int,int> mpp; 
        
        for(int i=0;i<=nums.size()-k;i++){ 
            unordered_set<int> st;

            for(int j=i;j<i+k;j++){ 
                st.insert(nums[j]);
            }

            for(auto x:st){
                mpp[x]++;
            }
        }    

        int maxi=-1; 

        for(auto x:mpp){ 
            if(x.second==1){ 
                maxi=max(maxi,x.first); 
            }
        } 

        return maxi; 
    } 
};