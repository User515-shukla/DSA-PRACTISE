class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_jump=0;
        int n=nums.size();
        int sum;
        for(int i=0; i<n;i++){
            sum=i+nums[i];
            if(i>max_jump){
               return false;
            }
            max_jump=max(max_jump,sum);
            if(max_jump>=n-1){
              return true;
            }
        }
        return true;
        
    }
};