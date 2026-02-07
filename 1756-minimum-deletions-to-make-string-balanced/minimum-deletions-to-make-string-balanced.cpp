class Solution {
public:
    int minimumDeletions(string s) {
    int op = 0;
    int b = 0;
    int n = s.size();

    for(int i=0; i<n; i++){
        if(s[i] == 'b'){
            b++;
        } else {
            op = min(op+1,b);
        }
    }
    return op;
    }
};