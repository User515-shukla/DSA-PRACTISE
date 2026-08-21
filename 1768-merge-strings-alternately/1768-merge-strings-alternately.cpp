class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int left=0;
        while(left<word1.size() || left<word2.size()){
            if(left<word1.size()){
                result+= word1[left];
            }
            if(left<word2.size()){
                result+= word2[left];
            }
            left ++ ;
        }
        return result;
        
    }
};