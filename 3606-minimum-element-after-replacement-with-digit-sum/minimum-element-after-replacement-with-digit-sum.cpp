class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            int n = nums[i];
            int sum = 0;

            while(n > 0){
                sum += n % 10;
                n = n / 10;
            }
            if(sum < min){
                min = sum;
            }
        }
    return min;
    }
};