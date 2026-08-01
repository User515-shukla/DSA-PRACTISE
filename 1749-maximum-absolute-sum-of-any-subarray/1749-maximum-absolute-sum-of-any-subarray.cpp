class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxisum=nums[0];
        int minsum=nums[0];
        int currmax=nums[0];
        int currmin=nums[0];
        for(int i=1;i<nums.size();i++){
            currmax=max(nums[i],currmax+nums[i]);
            maxisum=max(maxisum,currmax);
            
            currmin=min(nums[i],currmin+nums[i]);
            minsum=min(currmin,minsum);
           
        }
        int abs_max=abs(maxisum);
         int abs_min=abs(minsum);
        return max(abs_min,abs_max);
        
        
    }
};