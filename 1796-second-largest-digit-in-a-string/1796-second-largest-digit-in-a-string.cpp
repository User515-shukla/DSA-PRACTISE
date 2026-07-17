class Solution {
public:
    int secondHighest(string s) {
        int n= s.length();
    
        int firstlarge=-1;
        int secondlarge=-1;
        for(int i=0;i<n;i++){
           
            if(isdigit(s[i])){
               int num=s[i]-'0';
               if(num>firstlarge){
                  secondlarge=firstlarge;
                  firstlarge=num;
                } else if(num>secondlarge && num<firstlarge){
                   secondlarge=num;
                }
            }
        }
        
        return secondlarge;
    }
};