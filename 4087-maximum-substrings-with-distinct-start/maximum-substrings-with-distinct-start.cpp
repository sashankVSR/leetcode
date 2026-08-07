class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26, 0);
        int cnt = 0;
        for(char ch : s){
        if(freq[ch - 'a'] == 0){
            cnt++;
            freq[ch - 'a']++;
        }
    }
    return cnt;
    }
};