class Solution {
public:
    int reverseDegree(string s) {
    int sum=0;
    int n=s.size();
    for(int i =0;i<n;i++){
        int value= 123 - s[i];
        sum+=value * (i+1);
    }    
    return sum;
    }
};