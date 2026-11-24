class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128,-1);

        int left = 0;
        int best = 0;

        int  strLen  = s.length();
        for (int right = 0; right < strLen; right++ ){
            char ch = s[right];
            if (lastSeen[ch] >= left) {
                left = lastSeen[ch] + 1;
            }
            lastSeen[ch] = right;
            best = max(best, right-left+1);

        }
        return best;
    }
};