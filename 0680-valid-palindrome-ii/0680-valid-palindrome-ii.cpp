class Solution {
public:
    bool ispalindrome(string&s, int start, int end){
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0; 
        int right= s.size()-1;
        while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                bool deleteleft= ispalindrome(s,left+1,right);
                bool deleteright = ispalindrome(s,left,right-1);
                return deleteleft || deleteright;
            }
           
        }
        return true;
    }
};