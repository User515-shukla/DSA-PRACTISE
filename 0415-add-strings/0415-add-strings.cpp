class Solution {
public:
    string addStrings(string num1, string num2) {
        int left= num1.size()-1;
        int right=num2.size()-1;
        int carry=0;
        string result="";
        while(left>=0 || right>=0 || carry){
            int sum=carry;
            if(left>=0){
                sum+= num1[left--] - '0';
                
            }
            if(right>=0){
                sum+= num2[right--] -'0';
            }
            result= char((sum%10)+'0')+result;
            carry=sum/10;
        }
        return result;
    }
};