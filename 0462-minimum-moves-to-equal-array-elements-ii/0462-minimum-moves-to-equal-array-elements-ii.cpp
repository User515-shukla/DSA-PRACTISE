class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int middle=nums[nums.size()/2];
        int result=0;
        for(int i: nums){
            result+= abs(i-middle);
        }
        return result;

        
    }
};
// sort the array
// find the middle element
// calculate the absolute differnece between each element and the median.
// return the sum of all differences.