class Solution {
public:
    int expfromcenter(const string&s, int left, int right){
        int count=0;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            count++;
            left--;
            right++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount=0;
        for(int i=0; i<s.size();i++){
            totalcount+=expfromcenter(s,i,i);
            totalcount+=expfromcenter(s,i,i+1);
        }
        return totalcount;
    }
};