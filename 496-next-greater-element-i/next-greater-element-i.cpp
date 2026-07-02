class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
        int nxt_greater = -1;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    for (int k = j + 1; k < nums2.size(); k++) {
                        if (nums2[k] > nums2[j]) {
                            nxt_greater = nums2[k];
                            break;
                        }
                    }
                    break;
                }
            }
            ans.push_back(nxt_greater);
        }
        return ans;
    }
};