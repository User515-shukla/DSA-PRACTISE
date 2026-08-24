class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int tsub=0;
        int ssub=0;
        while(ssub<s.length() && tsub<t.length()){
            if(s[ssub]==t[tsub]){
                ssub++;
            }
            tsub++;
        }
        return ssub== s.length();
    }
};