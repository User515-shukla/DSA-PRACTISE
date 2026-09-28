class Solution {
public:
    int integerBreak(int n) {
        if (n == 2)
        return 1;
        if (n == 3) 
        return 2;
        int temp = 0;
        if (n % 3 == 0){
            temp = n / 3;
            return pow(3 , temp);
        }
        else if ( n % 3 == 2){
            temp = n / 3;
            return pow(3 , temp) * 2;
        }
        else{
            temp = n / 3;
            return pow(3 , temp - 1) * 4;
        }
        
    }
};