class Solution {
public:
    int reverse(int x) {
    long long digit = 0;
    while(x!=0){
    int r=x%10;
    digit =digit * 10 + r;
    x=x/10; 
        }
    if(digit > INT_MAX || digit < INT_MIN){
    return 0;
}
return digit;
    }
};