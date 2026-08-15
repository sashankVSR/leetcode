class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> new_heights = heights;
        sort(new_heights.begin(), new_heights.end());

        int cnt = 0;
        for(int i=0; i<heights.size(); i++){
            if(heights[i] != new_heights[i]){
                cnt++;
            }
        }
        return cnt;
    }
};