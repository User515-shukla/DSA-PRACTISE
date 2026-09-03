class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // o= odd and E=even
        int minO = INT_MAX;
        int minE = INT_MAX;

        for (int x : nums1) {
            if (x % 2 == 0) {
                minE = min(minE, x);
            } else {
                minO = min(minO, x);
            }
        }

        if (minO == INT_MAX) {
            return true;
        }

        return minO < minE;
    }
};