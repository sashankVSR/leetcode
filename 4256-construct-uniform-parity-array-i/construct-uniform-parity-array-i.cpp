class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        if(nums1.size() < 2) return true;
        bool possible = false;
        vector<int> nums2;

        for(int i=0; i < nums1.size(); i++){
            for(int j = i+1; j < nums1.size(); j++){
                if(nums1[i] % 2 == 0 || nums1[i] % 2 != 0){
                    nums2.push_back(nums1[i]);
            }
                possible = true;
            }
        }
        return possible;
    }
};
