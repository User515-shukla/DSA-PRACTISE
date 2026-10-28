class Solution {
public:
    bool isvowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0; i<k;i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        int best=count;
        for(int right=k; right<s.size();right++){
            if(isvowel(s[right])){
                count++;
            }
            if(isvowel(s[right-k])){
                count--;
            }
            best=max(best,count);
        }
        return best;
        
        
    }
};