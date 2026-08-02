class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        
        for(int j=0; j < n; j++){
            int cnt = 0;
        
        for(int i=0; i<n; i++){
            if(j != i && nums[i] < nums[j]){
                cnt++;
            }
        }
        ans[j] = cnt;
    }
        return ans;
    }
};