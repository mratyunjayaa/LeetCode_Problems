class Solution {
    public int[] findIntersectionValues(int[] nums1, int[] nums2) {
        int count1 = 0;
        int count2 = 0;

        HashSet<Integer> set1 = new HashSet<>();
        for (int it : nums1) {
            set1.add(it);
        }
        HashSet<Integer> set2 = new HashSet<>();
        for (int it : nums2) {
            set2.add(it);
        }
        for (int it : nums2) {
            if (set1.contains(it)) {
                count2++;
            }
        }
        for (int it : nums1) {
            if (set2.contains(it)) {
                count1++;
            }
        }
        return new int[] { count1, count2 };

    }
}