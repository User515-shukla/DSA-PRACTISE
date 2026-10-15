class Solution {
public:
    string removeStars(string s) {
        //ek khaali string banao phir ek loop run karo
        // usme dekho agar star aaya hai to top ka element remove kar do 
        // agar star nhi aaya hai to push karte jao 
        
        stack<char>st;
        for(int i=0;i<s.size();i++){
          
            if(s[i]=='*'){
               st.pop();
            }
            else{
                st.push(s[i]);
            }
           
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};