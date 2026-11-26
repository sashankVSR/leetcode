class Solution {
public:
    bool canAliceWin(int n) {
        int removeCount = 10;
        bool isAliceTurn = true;

        while (n >= removeCount && removeCount > 0) {
            n -= removeCount;
            removeCount--;
            isAliceTurn = !isAliceTurn;
        }
        return !isAliceTurn;        
    }
};