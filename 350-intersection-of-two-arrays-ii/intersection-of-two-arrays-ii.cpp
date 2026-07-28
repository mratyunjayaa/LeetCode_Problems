class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // two pointer approach

        int i = 0, j = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> v;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                v.push_back(nums2[j]);
                j++, i++;
            }
        }
        return v;
    }
};