class Solution {
public:
    void expand(const string& s, int left, int right, int& start, int& maxLen) {
        int n = s.length();
        
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        
        int currentLen = right - left - 1;
        
        if (currentLen > maxLen) {
            maxLen = currentLen;
            start = left + 1;
        }
    }

    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) return s;
        
        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < n; i++) {
            expand(s, i, i, start, maxLen);     // Odd length
            expand(s, i, i + 1, start, maxLen); // Even length
        }

        return s.substr(start, maxLen);
    }
};