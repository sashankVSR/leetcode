class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int largesum = 0, smallsum = 0;

        for(int i = 0; i < k; i++) {
            smallsum  += nums[i];
            largesum += nums[n-1-i];
        }
        return abs(largesum - smallsum);
    }
};