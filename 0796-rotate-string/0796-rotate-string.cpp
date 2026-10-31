class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        for(int i=0; i<s.size();i++){
            char c= s[0];
            s=s.substr(1)+c;
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};
// s.substr(1) matlab index 1 se lekar last tak letter . 
// jaise abcde agar hai to ans = bcde ho gya iska matlab.
