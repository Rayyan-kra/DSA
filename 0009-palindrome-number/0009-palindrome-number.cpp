class Solution {
public:
    bool isPalindrome(int x) {
    string s =to_string(x);
    int low=0;
    int high=s.size()-1;
    while(low <=high){
        if(s[low]!=s[high])return false;
        low++;
        high--;
    }    
    return true;
    }
};