class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=0,right,ans;
        long long sum=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            sum+=piles[i];
            right=max(right,piles[i]);
        }
        
        left=sum/h;
        if(!left)
        left=1;
        while(left<=right){
            int mid=left+(right-left)/2;
            // calculate time
            int time=0;
            for(int i=0;i<n;i++){
                time+=piles[i]/mid;
                if(piles[i]%mid)
                time++;
            }
            if(time>h){
                left=mid+1;
            }
            else{
                ans=mid;
                right=mid-1;
            }
        }
        return ans;
        
    }
};