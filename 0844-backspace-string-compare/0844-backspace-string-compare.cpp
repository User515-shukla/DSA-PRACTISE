class Solution {
public:

    string build(string str){
        string result="";
        for(int i=0; i<str.size();i++){
            if(str[i]=='#'){
                if(!result.empty()){
                    result.pop_back();
                }
            }
            else{
                result.push_back(str[i]);
            }
        }
        return result;
    }
    bool backspaceCompare(string s, string t) {
        return build(s)==build(t);
        
    }
};