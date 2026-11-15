class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high) {

            int mid = low + (high - low) / 2;

            int count = 1;
            int sum = 0;

            for(int i=0;i<weights.size();i++){
                if(sum+weights[i]>mid){
                    count++;
                    sum=weights[i];
                }
                else{
                    sum+=weights[i];
                }
            }
            if(count <= days) {
                high=mid-1;
            }else{
                low=mid+1;
            }

        }

        return low;
    }
};