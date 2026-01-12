class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
      int low = 0;
      int high = 0;
      for(int w : weights) {
        low = max(low, w);
        high += w;
      }

      while(low < high){
        int mid = low + (high-low)/2;

        int daycnt = 1;
        int currload = 0;

        for(int w : weights){
            if(currload + w > mid) {
                daycnt++;
                currload = 0;
            }
            currload += w;
        }
        if(daycnt <= days){
            high = mid;
        } 
        else{
            low = mid+1;
        }
      } 
      return low;
    }
};