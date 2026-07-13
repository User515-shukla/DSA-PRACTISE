class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
	    int right=0;
	    for(int left=0;left<nums.size();left++){
            if(nums[left]!=0){
              swap(nums[right],nums[left]);
              right++;

            }
             
        }
		  
		 
    }
	
        
    
};