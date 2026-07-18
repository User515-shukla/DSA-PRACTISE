class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maximum = INT_MIN;
        for(int i = 0; i < n; i++){
            int sum = 1;
            for(int j=i; j < n; j++){
                sum *= nums[j];
                maximum = max(maximum, sum);
            }  
        }
        return maximum;
        
    }
};