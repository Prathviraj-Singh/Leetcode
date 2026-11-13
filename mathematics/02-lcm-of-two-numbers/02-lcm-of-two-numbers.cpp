class Solution {
public:
    int findLCM(int nums1, int nums2) {
        int nums3 = max(nums1, nums2);
        int ans = 0;
        for(int i = nums3; i <= nums1 * nums2; i += nums3) {
            if(i % nums1 == 0 && i % nums2 == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};