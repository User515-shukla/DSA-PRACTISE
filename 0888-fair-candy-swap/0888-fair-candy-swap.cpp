class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA=0;
        int sumB=0;
        for(int i : aliceSizes){
            sumA+=i;
        }
        for(int j: bobSizes){
            sumB+=j;
        }
        int difference=(sumB-sumA)/2;
        unordered_set<int>bobset(bobSizes.begin(),bobSizes.end());
        for(int i : aliceSizes){
            int j=i+difference;
            if(bobset.count(j)){
                return {i , j};
            }
        }
        return {};
        
    }
};