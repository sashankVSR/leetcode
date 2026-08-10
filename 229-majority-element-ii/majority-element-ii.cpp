class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candi1 = 0, candi2 = 0;
        int cnt1 = 0, cnt2 = 0;

        for(int num : nums){
            if(num == candi1){
                cnt1++;
            }
            else if(num == candi2){
                cnt2++;
            }
            else if(cnt1 == 0){
                candi1 = num;
                cnt1++;
            }
            else if(cnt2 == 0){
                candi2 = num;
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int num : nums){
            if(num == candi1) cnt1++;
            else if(num == candi2) cnt2++;
        }
        vector<int> res;
        int n = nums.size();
        if(cnt1 > n / 3) res.push_back(candi1);
        if(cnt2 > n / 3) res.push_back(candi2);

        return res;
    }
};