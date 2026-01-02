class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int N = nums.size();
        int count=0;

        for (int i = 0; i < N-2; i++){
            if(nums[i] == nums[i+1] || nums[i] == nums[i+2]) {
                return nums[i];
            }
        }
    return nums[N-1];
    }
};