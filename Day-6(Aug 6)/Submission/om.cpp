class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int size = nums.size();
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i=0;i<size;i++) {
            minPrice = min(minPrice , nums[i]);
            maxProfit = max(maxProfit , nums[i]-minPrice);
        } 
        return maxProfit;
    }
};
