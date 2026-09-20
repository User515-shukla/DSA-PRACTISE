class Solution {
public:
    int reverseDegree(string s) {
        // pahle intitialize karo value from a to z;
        // uske baad loop chalao i=1 se string length tak
        // formula lagao num * index no karo
        int sum=0; 
        
        for(int i=0;i<s.length();i++){
            char c=s[i];
            int position = 26-(c-'a');
            sum+= (i+1)*position;
        }
        return sum;
        
    }
};