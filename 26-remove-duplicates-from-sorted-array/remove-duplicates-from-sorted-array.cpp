class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;

        for(int j=1; j<nums.size(); j++){
            if(nums[j] != nums[k-1]){
                nums[k] = nums[j];
                k++;
            }
        }
        return k;
    }
};