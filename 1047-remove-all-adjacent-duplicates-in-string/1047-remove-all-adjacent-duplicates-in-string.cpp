class Solution {
public:
    string removeDuplicates(string s) {
        // ek stack char banao
        // ek loop chalao 
          // check karo stack empty hai aur top agar size ka barabar hai to karo nahi to push kar do 
        // ek string result bano
        // jabtak stack empty nhi ho jaata tab tak result me top add karte raho uske baad result ko reverse kar dena hai.
        // phir return kara dena result ko.
        stack<char>st;
        for(int i=0; i<s.size();i++){
            if(!st.empty() && st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};