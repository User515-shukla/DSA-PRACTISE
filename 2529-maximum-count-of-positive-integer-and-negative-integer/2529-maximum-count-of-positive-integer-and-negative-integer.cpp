class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int poscount=0;
        int negcount=0;
        int right=nums.size();
        int maxi;
        for(int i=0; i<right; i++){
            if(nums[i]<0){
                negcount++;
            }
            else if(nums[i]>0){
                poscount++;
            }
           
        }
        return max(poscount,negcount);
    }
};