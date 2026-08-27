class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
        return 1;
        double halfpower=myPow(x,n/2);
        double halfpowersquare=halfpower*halfpower;
        if(n%2==0){
            return halfpowersquare;
        }
        else{
            if(n<0){
                return (1/x)* halfpowersquare;
            }
            else{
               return x*halfpowersquare;
            }
        }
        
    }
};