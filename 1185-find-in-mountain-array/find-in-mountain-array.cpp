// /**
//  * // This is the MountainArray's API interface.
//  * // You should not implement it, or speculate about its implementation
//  * class MountainArray {
//  *   public:
//  *     int get(int index);
//  *     int length();
//  * };
//  */

// class Solution {
// public:
//     int findInMountainArray(int target, MountainArray a) {
//         int n = a.length();
//         int low = 0; 
//         int high = n-2;
//         int peak = -1;
//         while(low <= high){
//             int mid = (low + high) / 2;
//             int val = a.get(mid);
//             int leftval = a.get(mid-1);
//             int rightval = a.get(mid+1);

//             if(val > leftval && val > rightval){
//                 peak = mid;
//                 break;
//             }
//             else if(leftval > val){
//                 low = mid + 1;
//             }
//             else 
//                 high = mid - 1;
//         }
//         // to search in first half
//         low = 0;
//         high = peak;
//         while(low <= high){
//             int mid = (low+high)/2;
//             int val = a.get(mid);
//             if(val == target){
//                 return mid;
//             }
//             else if(target > val){
//                 low = mid + 1;
//             }
//             else 
//                 high = mid - 1;
//         }

//         // to search in second half
//         low = peak+1;
//         high = n-1;
//         while(low <= high){
//             int mid = (low+high)/2;
//             int val = a.get(mid);
//             if(val == target){
//                 return mid;
//             }
//             else if(val > target){
//                 low = mid + 1;
//             }
//             else
//                 high = mid - 1;
//         }
//     return -1;
//     }
// };
class Solution {
public:
    int findInMountainArray(int target, MountainArray &a) {

        int n = a.length();

        int low = 1;
        int high = n - 2;
        int peak = -1;

        while(low <= high){
            int mid = (low + high) / 2;

            int val = a.get(mid);
            int leftval = a.get(mid - 1);
            int rightval = a.get(mid + 1);

            if(val > leftval && val > rightval){
                peak = mid;
                break;
            }
            else if(rightval > val){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        // first half (ascending)
        low = 0;
        high = peak;

        while(low <= high){
            int mid = (low + high) / 2;
            int val = a.get(mid);

            if(val == target)
                return mid;

            if(val < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        // second half (descending)
        low = peak + 1;
        high = n - 1;

        while(low <= high){
            int mid = (low + high) / 2;
            int val = a.get(mid);

            if(val == target)
                return mid;

            if(val > target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};