class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        int n=nums.size();
        for(int i=n-1;i>=n-k;i--){
            long long multi= max(1LL,(long long)mul);
            sum+=nums[i]*multi;
            mul--;
        }
        return sum;
        
    }
};