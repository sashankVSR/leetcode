class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> res;

        for(int i=0; i<nums.size(); i++){
            bool found = false;

            for(int x=0; x<nums[i]; x++){
                if((x|(x+1)) == nums[i]){
                    res.push_back(x);
                    found = true;
                    break;
                } 
            }
            if (!found){
                res.push_back(-1);
            }
        }
        return res;
    }
};