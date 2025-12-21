class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> res,p,n;

    int N = nums.size();  
    for(int i=0;i<N;i++){
        if(nums[i]>0){
            p.push_back(nums[i]);
        } 
        else {
            n.push_back(nums[i]);
        }
    }
    int x=0;
    int y=0;
    for(int i=0;i<N;i++){
        if(i%2 == 0){
            res.push_back(p[x]);
            x++;
        } else {
            res.push_back(n[y]);
            y++;
        }
    }
    return res;
    }
};