class Solution {
public:
    int countPairs(vector<int>& nums, int target) {

        int n = nums.size();
        sort(nums.begin(),nums.end());

        int left = 0, right = n-1;
        int cnt = 0;

        while(left < right){
            
            int sum = nums[left] + nums[right];

            if(sum < target){
                cnt += (right - left);
                left++;
            }
            else{
                right--;
            }
        }
    return cnt;
    }
};