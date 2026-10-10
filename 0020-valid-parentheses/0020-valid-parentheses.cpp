class Solution {
public:
    bool isValid(string s) {
        // 1.pahle odd even check karo size ka agar odd raha to false hoga
        // 2.ek stack char banao
        //3. ek loop chalao usme data entry karo bracket ko order me aur usko push karo 
        // 4. dekho agar top khaali hai to usko false return karo
        // 5. ek top banao char se usme stack ka top initialize karo
        // 6. usme dusra condition check karo 2nd wala har ek brancket aur top waale se compare karo ya and use karke condition do match ke liye
        // 7. phir pop karte jao nhi to false return karo 
        // 8. ab return empty karwa do.

        // step 1.
        if(s.size()%2!=0)
        return false;
        // step 2. 
        stack<char>st;
        // step 3.
        for(int i=0; i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                //4.
                if(st.empty()){
                  return false;
                }
                char top= st.top();
                if ((s[i] == ')' && top == '(') ||
                (s[i] == '}' && top == '{') ||
                (s[i] == ']' && top == '[')) {
                st.pop();
                } 
                else {
                  return false;
                }
            }
        }
        return st.empty();

       
    }
};