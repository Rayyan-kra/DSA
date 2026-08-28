class Solution {
public:
    int hIndex(vector<int>& z) {
        sort(z.rbegin(), z.rend());

        int m = 0;

        for(int i = 0; i < z.size(); i++) {
            if(z[i] >= i + 1) {
                m = i + 1;
            }
        }

        return m;
    }
};