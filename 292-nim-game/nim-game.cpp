class Solution {
public:
    bool canWinNim(int n) {
        if(n <= 3){
            return true;
        }
        if(n == 4){
            return false;
        }
        while(n > 0){
            n -= 3;
            if(n == 1) {
                return false;
            }
            n--;
        }
        return true;
    }
};