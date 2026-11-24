class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int  res = 0;

        for(int i=0; i < n; i++){
            int prod = nums[i];
            int lccm = nums[i];
            int gccd = nums[i]; 

            for(int j=i+1; j < n; j++){
                gccd = __gcd(gccd, nums[j]);
                lccm = lcm(lccm, nums[j]);
                prod = prod*1LL*nums[j];

                if(prod == lccm*gccd){
                    res = max(res, (j - i + 1));
                }
            }
        }
    return res;    
    }
};