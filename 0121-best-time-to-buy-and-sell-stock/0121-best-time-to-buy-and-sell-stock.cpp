class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
        return 0;
        vector<int>buy(prices.size());
         buy[0]=prices[0];
        int max_profit=0;
        for(int i=1;i<prices.size();i++){
            buy[i]=min(buy [i-1],prices[i]);
        }
        for(int i=0;i<prices.size();i++){
            int current_profit=prices[i]-buy[i];
            max_profit=max(max_profit,current_profit);
        }
        return max_profit;

        
    }
    
};