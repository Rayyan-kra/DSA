class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.size();
        int m = part.size();

        for (int i = 0; i <= n - m; i++) {
            if (s.substr(i, m) == part) {
                s.erase(i, m);   // remove substring
                i = -1;          // restart checking from beginning
                n = s.size();    // update size
            }
        }
        return s;
    }
};