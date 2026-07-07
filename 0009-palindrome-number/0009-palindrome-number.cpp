class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0))
        return false;
        int remainder;
        int orignum=x;
        long long palin=0;
        while(x>0){
            remainder=x%10;
            palin=palin*10+remainder;
            x/=10;
        }
        return orignum==palin;
    }
};