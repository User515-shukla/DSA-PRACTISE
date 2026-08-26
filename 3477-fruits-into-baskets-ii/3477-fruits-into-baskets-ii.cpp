class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
         int ans = 0, n = fruits.size();
        vector<bool> done(n);

        for (int i = 0; i < n; ++i) {
            bool check = false;
            for (int j = 0; j < n; ++j) {
                if (!done[j] && baskets[j] >= fruits[i]) {
                    check = true;
                    done[j] = true;
                    break;
                }
            }
            if (!check) ++ans; 
        }

        return ans;

        
    }
};