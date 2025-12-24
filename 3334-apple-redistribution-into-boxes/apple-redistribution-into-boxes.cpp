class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end(), greater<int>());

        int totalApple = accumulate(apple.begin(), apple.end(), 0);

        int count = 0;

        for (int i = 0; i < capacity.size() && totalApple > 0; i++) {
            totalApple -= capacity[i];
            count++;
        }
        return count;
    }
};