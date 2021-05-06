class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestsum=INT_MIN;
        int currentsum=0;
        
        for (auto j: nums)
        {
            currentsum=max(j,currentsum+j);
            bestsum=max(bestsum,currentsum);
}
        return bestsum;
        
        
    }
};
