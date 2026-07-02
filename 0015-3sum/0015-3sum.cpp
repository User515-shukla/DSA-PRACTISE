class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
          // code here
        // maine is question me 2d vector nahi banaya tha isliye answer nahi aa rah atha
        // ye 2d array ban gaya
        // duplicate case chor diya maine
        // maine pointer ko aage badana waale concept soch hi nhi paaya
        // left and right pointer ke duplicates miss ho gaya hai
        // baad baaki sab concept sahi tha upar waala chorkar
        vector<vector<int>>result;
        sort(arr.begin(),arr.end());
        int x=0;
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            // duplicate case dekho
            if(i>0 && arr[i]==arr[i-1])
            continue;
            int ans=x-arr[i];
            int left= i+1;
            int right=n-1;
            while(left<right){
                if(arr[left]+arr[right]==ans){
                    result.push_back({arr[i], arr[left],arr[right]});
                    //pointers ko aage badhao taaki aur triplets mil sake
                    left++;
                    right--;
                    // left pointer ke duplicates
                    while(left<right && arr[left]==arr[left-1]){
                        left ++;
                    }
                    // right pointer ka duplicates
                    while( left< right && arr[right]==arr[right+1]){
                        right--;
                    }
                }
                else if(arr[left]+arr[right]>ans){
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return result;
        
    }
};