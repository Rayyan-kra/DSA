class Solution {
public:
    int smallestNumber(int n, int t) {

        for(int i = 0; ; i++){

            int s = n + i;
            int temp = s;
            int product = 1;

            while(temp > 0){

                int digit = temp % 10;
                product *= digit;
                temp = temp / 10;

            }

            if(product % t == 0){
                return s;
            }
        }

        return -1;
    }
};