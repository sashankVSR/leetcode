class Solution {
public:
    bool check(string &s, int lf, int rt){
        if(lf >= rt){
            return true;
        }
        if(s[rt] != s[lf]){
            return false;
        }
        return check(s, lf+1, rt-1);
    }

    bool isPalindrome(string s) {
        string str = "";
        for(char ch : s){
            if(isalnum(ch)){
                str += tolower(ch);
            }
        }
    return check(str, 0, str.size()-1);   
    }
};