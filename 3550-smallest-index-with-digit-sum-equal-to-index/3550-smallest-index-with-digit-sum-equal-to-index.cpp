class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        // ek loop chalao aur sara number ko store karo
        // remainder ka concept lagao har number ke liye
        // sum ke barabar index ho gya to return kardo warna return -1 kardo;
       
        for(int i=0;i<nums.size();i++ ){
            int num=nums[i];
            int sum=0;
            while(num>0){
              sum+=num%10;
              num/=10;
            }
            if(sum==i)
             return i;
        }
       
        return -1;
    }
};