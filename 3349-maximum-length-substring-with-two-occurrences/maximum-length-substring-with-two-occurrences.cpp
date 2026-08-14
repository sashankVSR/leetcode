class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        int maxLen = 0;
        int l = 0;

        for(int r=0; r<n; r++){
            char curr = s[r];
            mp[curr]++;

            while(mp[curr] > 2){
                char leftchar = s[l];
                mp[leftchar]--;
                l++;
            }
            maxLen = max(maxLen, r - l + 1);
        }
    return maxLen;
    
    }
};