class Solution {
public:

    bool check(string &s, int st, int en){
        while(st < en){
            if(s[st] != s[en])
                return false;
            st++;
            en--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
    int st=0, en=s.length()-1;

    while(st<en){
        if(s[st] != s[en]){
            return check(s, st+1, en) || check(s, st, en-1);
    }
    st++;
    en--;    
    }
    return true;
    }
};