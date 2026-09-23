class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // pahle dono ka  common minimum nikalo
        // dono ka min comapare karo are match kar gya to return kara do
        // agar match nhi kiya to return -1 karwa do;
        int common= INT_MIN;
        int left=0;
        int right=0;
        while(left<nums1.size() && right<nums2.size()){
            if(nums1[left]==nums2[right]){
                common=nums1[left];
                break;
            }
            else if(nums1[left]<nums2[right]){
                left++;
            }
            else{
                right++;
            }
        }
        if(common!=INT_MIN){
            return common;
        }
        else{
            return -1;
        }
       
    }
};