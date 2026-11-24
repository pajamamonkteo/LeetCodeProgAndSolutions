class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 0;
        int size = s.size();
    
        for (int i = 0; i < size; i++){
            int len1 = expand (s, i, i);
            int len2 = expand (s, i ,i+1);
            int len = max(len1,len2);

            if (len > maxLen) {
                maxLen = len;
                start = i - (len -1) / 2;
            }
        }
return s.substr(start, maxLen);
    }

private:

int expand (const string& s, int l, int r) {
    int n = (int)s.size();
    while (l >= 0 && r < n && s[l] == s[r]) {
        l--;
        r++;
    }
    return r - l - 1; 
}
};