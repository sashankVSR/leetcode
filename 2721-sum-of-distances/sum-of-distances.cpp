class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
            mp[nums[i]].push_back(i);

        vector<long long> ans(n);
        
        for (auto &it : mp) {
            vector<int> &pos = it.second;
            int k = pos.size();
            vector<long long> pref(k + 1, 0);
            for (int i = 0; i < k; i++)
                pref[i + 1] = pref[i] + pos[i];
            for (int i = 0; i < k; i++) {
                long long left =
                    1LL * i * pos[i] - pref[i];
                long long right =
                    (pref[k] - pref[i + 1]) -
                    1LL * (k - i - 1) * pos[i];
                ans[pos[i]] = left + right;
            }
        }
        return ans;
    }
};