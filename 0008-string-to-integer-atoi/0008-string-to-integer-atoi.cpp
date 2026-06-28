class Solution {
public:
    int myAtoi(string s) {
        long long a = 0;   // use long long for safe accumulation
        int t = s.size();
        int sign = 1;
        int i = 0;

        // skip spaces
        while (i < t && s[i] == ' ') i++;

        // check sign
        if (i < t && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        // convert digits
        for (; i < t; i++) {
            int digit = s[i] - '0';
            if (digit >= 0 && digit <= 9) {
                a = a * 10 + digit;

                // prevent overflow
                if (sign == 1 && a > INT_MAX) return INT_MAX;
                if (sign == -1 && -a < INT_MIN) return INT_MIN;
            } else {
                break;
            }
        }

        return (int)(a * sign);
    }
};