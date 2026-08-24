class Solution {
public:
    char findTheDifference(string s, string t) {
        // pahle sort kar do
        // phir intitialize i=0 karo
        // ab while loop lagao i<0 and s[i]==t[i]
           // yaha i ko 1 se badha do
        // return t[i] kar do
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        while(i<s.size() && s[i]==t[i]){
            i++;
        }   
        return t[i];
    }
};