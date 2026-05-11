class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;

        for(int i = 0; i < nums.size(); i++){
            string S = to_string(nums[i]);

        for(int j = 0; j < S.length(); j++){
            answer.push_back(S[j] - '0');
        }
    }
    return answer;
    }
};