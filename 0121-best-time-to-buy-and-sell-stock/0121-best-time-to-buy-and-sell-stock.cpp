class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int sub=0;
    int mini=INT_MAX;
    int maxi=0;
    for(int i =0;i<n;i++){
            mini=min(mini,prices[i]);
            sub=prices[i]-mini;

            if(sub>0){
            maxi=max(sub,maxi);
            }
    }    
    return maxi;
    }
};