class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> freq(3,0);
        int left=0;
        int count=0;
        for(int right=0;right<s.size();right++){
            freq[s[right]-'a']++;
            while(freq[0]>0 && freq[1]>0 && freq[2]>0){
                freq[s[left]-'a']--;
                left++;
            }
            count+=left;
        }
        return count;
    }
};
// ek vector banao 3 size ka initailize 0 karo 
//do variable left aur best banao dono ko initialize karo 0 
// ek loop chalao right=0 se s.size tak phir freq count karo increase karo
// isi ke andar ek loop chalao while karke freq compare karo phir freq count decrease karo aur left ko increase karo
// count ko add karo