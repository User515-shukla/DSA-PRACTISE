class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        if (n == 1)
        return nums[0];
        if (nums[0] != nums[1])
        return nums[0];
        if (nums[n - 1] != nums[n - 2]) 
        return nums[n - 1];
        int left=1;
        int right= nums.size()-1;
       
        while(left<=right){
           if(nums[left]==nums[left-1]){
              
            left=left+2;
           }
           else{
             return nums[left-1];
           }

        } 
        return -1;
       
        
    }
};