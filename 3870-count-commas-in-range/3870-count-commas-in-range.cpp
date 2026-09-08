class Solution {
public:
    int countCommas(int n) {
    int sub;
    if(n>=1000){
    sub=n-999;
    return sub;
    }
    return 0;    
    }
};