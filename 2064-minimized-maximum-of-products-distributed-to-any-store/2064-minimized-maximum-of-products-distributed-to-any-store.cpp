class Solution {
public:
    int minimizedMaximum(int n, vector<int>& q) {
        int l = 1, r = *max_element(q.begin(), q.end());

        while (l < r) {
            int mid = (l + r) / 2;
            
            int stores = 0;
            for (int x : q) {
                stores += (x + mid - 1) / mid; 
            }

            if (stores <= n)
                r = mid;  
            else
                l = mid + 1; 
        }

        return l;
    }
};