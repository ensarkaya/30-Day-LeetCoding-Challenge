/**
**@author: Ensar Kaya
**Fifth Day Problem Max Profit
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<1)
            return 0;
        int profit=0;
        int min=prices[0],max=prices[0];
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]>prices[i+1]){
                profit += max-min;
                min = prices[i+1];
                max = prices[i+1];
            }
            else{
                max = prices[i+1];
            }
        }
        return profit+max-min;
    }
};
