class Solution {
public:
    string reverseWords(string s) {
       stack<string>st;
       for(int i=0;i<s.size();i++){
           if(s[i]==' '){
              continue;
            }
            string word="";
            while(i<s.size() && s[i]!=' '){
               word+=s[i];
               i++;
            }
            st.push(word);
       }
       // ab stack se nikaalo ulta order me
       string result="";
       while(!st.empty()){
         result+=st.top();
         st.pop();
         if(!st.empty()){
            result+=" ";
         }
       }
       return result;
       

        
    }
    
};