class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int left=1;
        int right=nums.size()-1;
        sort(nums.begin(),nums.end());
        if(right<1)
        return false;
        
        while(left<=right){
            if(nums[left]!=nums[left-1]){
                left++;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};