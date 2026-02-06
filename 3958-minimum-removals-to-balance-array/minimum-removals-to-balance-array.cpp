class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
    int n = nums.size();

    sort(begin(nums), end(nums));

    int L = 1;
    int maxEle = nums[0];
    int minEle = nums[0];
    int i=0,j=0;

    while(j < n){
        minEle = nums[i];
        maxEle = nums[j];

        while(i < j && maxEle > (long long) k*minEle) {
            i++;
            minEle = nums[i];
        }

        L = max(L, j-i+1);
        j++;
    }   
    return n-L;
    }
};