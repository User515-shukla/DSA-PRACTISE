class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(int i=0; i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                   st.push(')');
                }
            }
        }
        return st.size();
        
    }
};
// pahle wale bracket ko push kardo stack me 
// ab dekho jab tak stack empty na ho jaaye aur top par sirf open bracket hai to woh pair match kar jayega so pop kar jayega
// agar waisa pair nahi hai to closed bracket usme push ho jayega.

// immandari se is question ka logic maine socha 80% tak aisa hi tha jab kuch case ke liye maine jyada hi code likh diya tha jabki isme se kuch part delete karne ke baad code run ho gaye.