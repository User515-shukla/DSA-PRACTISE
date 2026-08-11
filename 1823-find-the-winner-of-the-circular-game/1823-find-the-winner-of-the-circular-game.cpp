class Solution {
public:
     int help(int n,int k){
        int ans = 0;
        for(int i=1; i<=n; i++){
            ans = (ans + k) % i;
        }
        return ans;
    }
    int findTheWinner(int n, int k) {
        return help(n,k)+1;
        //+1 is for conterting 0-based indexing to 1-based indexing
    }

};