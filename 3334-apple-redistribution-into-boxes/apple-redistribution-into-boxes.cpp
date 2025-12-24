class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = 0;
        int count = 0;
        int usedCapacity = 0;

        for (int i=0; i < apple.size(); i++) {
            totalApples += apple[i];
        }

        sort(capacity.begin(), capacity.end());

        for(int i=capacity.size()-1; i >= 0; i--){
            usedCapacity += capacity[i];
            count++;

            if (usedCapacity >= totalApples){
                break;
            }
        }
        return count;
    }
};