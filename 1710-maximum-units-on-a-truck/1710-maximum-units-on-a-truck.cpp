class Solution {
public:

    static bool compare(vector<int> a, vector<int> b) {
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(), boxTypes.end(), compare);

        int total = 0;

        for (int i = 0; i < boxTypes.size(); i++) {

            int box = boxTypes[i][0];
            int unit = boxTypes[i][1];

            if (truckSize >= box) {
                total += box * unit;
                truckSize -= box;
            } else {
                total += truckSize * unit;
                break;
            }
        }

        return total;
    }
};