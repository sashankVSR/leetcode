class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.length();
        int b_var = 0;
        int ans = 0;
        for(int i=0; i < n; i++){
            if(s[i] == 'L'){
                b_var++;
            }
            else{
                b_var--;
            }
            if(b_var == 0){
                ans++;
            }
        }
    return ans;
    }
};