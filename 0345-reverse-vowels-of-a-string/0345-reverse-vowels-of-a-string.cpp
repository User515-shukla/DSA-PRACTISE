class Solution {
public:
    bool isvowels(char ch){
        ch=tolower(ch);
        return ch=='a' || ch=='e' || ch=='i'|| ch=='o' || ch=='u';
    }
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(!isvowels(s[left]))
            left++;
            else if(!isvowels(s[right]))
            right--;
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }

        }
        return s;
        
    }
};