class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int prod = k;
        bool found = true;

        while(found){
            found = false;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == prod){
                    found = true;
                    prod += k;
                    break;
                }
            }
        }
    return prod;
        
    }
};
