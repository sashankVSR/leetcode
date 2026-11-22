class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int dom_cnt = 0;

        if(nums.size() == 1)
            return 1;

        for(int i = 0; i < nums.size(); i++) {
            if(i == 0) {
                if(nums[i] >= nums[i+1])
                    dom_cnt++;
            }
            else if(i == nums.size()-1) {
                if(nums[i] >= nums[i-1])
                    dom_cnt++;
            }
            else {
                if(2 * nums[i] >= nums[i-1] + nums[i+1])
                    dom_cnt++;
            }
        }
        return dom_cnt;
    }
};