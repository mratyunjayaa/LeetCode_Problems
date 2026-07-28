class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //Brute Force
        vector<int> v;
        int i = 0, j = 0, n1 = nums1.size(), n2 = nums2.size();
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                v.push_back(nums1[i]);
                i++;
            } else {
                v.push_back(nums2[j]);
                j++;
            }
        }
        while (i < n1) {
            v.push_back(nums1[i]);
            i++;
        }
        while (j < n2) {
            v.push_back(nums2[j]);
            j++;
        }
    int n = v.size() ;
    if (n % 2 == 1)
        return v[n / 2];

    return (v[n / 2 ] + v[n / 2 - 1 ]) / 2.0;
    }
};