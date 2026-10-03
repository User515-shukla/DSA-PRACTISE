class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // pahle ek vector size declare karo
        // ek loop chalao magazine ka jisme freq count karo ++ karke
        // phir ek loop chalao jisme upar wala character match kare by count freq -- karke
        // agar freq count less than zero hua to return false kar dena
        vector<int> freq(26, 0);
    

        for (char c : magazine) {
             freq[c - 'a']++;
        }

        for (char c : ransomNote) {
            freq[c - 'a']--;
            if (freq[c - 'a'] < 0)
             return false;
        }
        return true;

    
    }
};