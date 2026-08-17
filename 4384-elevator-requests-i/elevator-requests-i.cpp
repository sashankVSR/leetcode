class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum = 0;
        int currFloor = 0;
        for(int i=0; i<requests.size(); i++){
            sum += abs(currFloor - requests[i]);
            currFloor = requests[i];
        }
    return sum;
    }
};