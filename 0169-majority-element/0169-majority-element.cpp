class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int totalvote=0;
        int candidate=0;
        for(int num:nums){
            if(totalvote==0){
                candidate=num;
            }
            if( candidate==num){
                totalvote++;
            }
            else{
                totalvote--;
            }
        }
        return candidate;
        
    }
};