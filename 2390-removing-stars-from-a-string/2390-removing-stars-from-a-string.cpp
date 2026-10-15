class Solution {
public:
    string removeStars(string s) {
        //ek khaali string banao phir ek loop run karo
        // usme dekho agar star aaya hai to top ka element remove kar do 
        // agar star nhi aaya hai to push karte jao 
        
        string result="";
        for(int i=0;i<s.size();i++){
          
            if(s[i]=='*'){
               result.pop_back();
            }
            else{
               result.push_back(s[i]);
            }
           
        }
        return result; 
    }
};