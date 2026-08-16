class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long tot_xor=0;
        int n= nums.size();
        for(int i=0; i<n;i++){
            tot_xor^=nums[i];
        }
        int mask= tot_xor & (-tot_xor);
        int a=0,b=0;
        for( int i=0; i<n;i++){
            if((nums[i]& mask)==0){
                a^=nums[i];
            }
            else{
                b^=nums[i];
            }
        }
        return {a,b};
        
    }
};