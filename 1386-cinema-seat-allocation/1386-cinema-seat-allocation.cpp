class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, vector<int>> arr;

        for(int i = 0; i < reservedSeats.size(); i++) {
            int row = reservedSeats[i][0];
            int seat = reservedSeats[i][1];

            if(arr.find(row) == arr.end()) {
                arr[row] = vector<int>(11, 0);
            }

            arr[row][seat] = 1;
        }

        long long count = (long long)(n - arr.size()) * 2;

        for(auto &x : arr) {

            vector<int> &seats = x.second;

            bool left = false;
            bool right = false;

            if(seats[2] == 0 &&
               seats[3] == 0 &&
               seats[4] == 0 &&
               seats[5] == 0) {

                count++;
                left = true;
            }

            if(seats[6] == 0 &&
               seats[7] == 0 &&
               seats[8] == 0 &&
               seats[9] == 0) {

                count++;
                right = true;
            }

            if(left == false && right == false) {

                if(seats[4] == 0 &&
                   seats[5] == 0 &&
                   seats[6] == 0 &&
                   seats[7] == 0) {

                    count++;
                }
            }
        }

        return count;
    }
};