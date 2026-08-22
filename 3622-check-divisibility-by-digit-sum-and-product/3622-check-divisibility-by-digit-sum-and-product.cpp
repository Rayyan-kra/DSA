class Solution {
public:
    bool checkDivisibility(int n) {
    int sum=0;
    long long product=1;
    int total=0;
   int temp = n;
    int digit=0;
while(temp > 0){
    digit = temp % 10;
    sum += digit;
    product *= digit;

    temp = temp / 10;
}
    total=sum+product;
    if(n%total==0){
        return true;
    }
    return false;
    }
};