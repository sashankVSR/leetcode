class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;

        string dbl = s + s;

        return dbl.find(goal) != string::npos;
    }
};