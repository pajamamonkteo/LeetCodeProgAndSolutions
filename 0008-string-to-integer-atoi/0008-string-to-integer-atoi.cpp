class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        while (i < n && s[i] == ' ') i++;

        int sign = 1;
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        int res = 0;
        while (i < n && isdigit(s[i])) {
            int d = s[i] - '0';
            if (res > (INT_MAX - d) / 10)
                return sign == 1 ? INT_MAX : INT_MIN;
            res = res * 10 + d;
            i++;
        }
        return res * sign;
    }
};