class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxpro=INT_MIN;
        int product=1;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            product*=nums[i];
            maxpro=max(product,maxpro);
            if(product==0)
            product=1;
            
        }
        product=1;
        for(int i=nums.size()-1;i>=0;i--){
            product*=nums[i];
            maxpro=max(product,maxpro);
            if(product==0)
            product=1;

        }

        return maxpro;
    }
};