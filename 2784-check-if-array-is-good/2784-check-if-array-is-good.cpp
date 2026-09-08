class Solution {
public:
    bool isGood(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int length=nums.size();
        int n= nums[length-1];
        if(length!=n+1)
        return false;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=i+1){
                return false;
            }
        }
        if(nums[length-1]!=n || nums[length-2]!=n){
            return false;
        }
        return true;

    }
};