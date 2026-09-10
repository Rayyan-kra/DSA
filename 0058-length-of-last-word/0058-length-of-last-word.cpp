class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        string d = "";

        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == ' ' && d.empty()) continue;

            if(s[i] == ' ') {
                return d.length();
            }

            d.push_back(s[i]);

            if(i == 0) {
                return d.length();
            }
        }

        return 0;
    }
};