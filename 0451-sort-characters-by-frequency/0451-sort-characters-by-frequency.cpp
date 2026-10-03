class Solution {
public:
    string frequencySort(string s) {
        // ek loop chalao aur freq count karo
        // ek string result pass karo
        // int maxcount  aur max index var ek declae karo
        // while loop chalaoo
         // ek loop chalao size 256 tak
            // agar freq maxcount se bara ho gya to value update karo
         // ek j loop chalo 0 se maxcont tak usme result calculate karo
        vector<int>freq(256,0);    
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        string result="";
        while(result.size()<s.size()){
            int maxcount=0;
            int maxindex=0;
            for(int i=0; i<256;i++){
                if(freq[i]>maxcount){
                    maxcount=freq[i];
                    maxindex=i;
                }
            }
            for (int j = 0; j<maxcount; j++) {
                 result += (char)maxindex;
            }
            freq[maxindex] = 0;
        }
        return result;

    }
};