class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total_sum = 0;
        for(int x : cardPoints){
            total_sum += x;
        }
        if(k == n) return total_sum;

        int windowSize = n-k;
        int currWindowSum = 0;
        for(int i=0; i< windowSize; i++){
            currWindowSum += cardPoints[i];
        }

        int minwindowSum = currWindowSum;
        for(int i=windowSize; i<n; i++){
            currWindowSum += cardPoints[i] - cardPoints[i - windowSize];
            minwindowSum = min(minwindowSum, currWindowSum);
        }
        return total_sum - minwindowSum;
    }
};