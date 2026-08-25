class Solution {

    public int missingMultiple(int[] nums, int k) {

        int i = 1;

        while (true) {

            int val = k * i;
            boolean found = false;

            for (int j = 0; j < nums.length; j++) {

                if (val == nums[j]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                return val;
            }

            i++;
        }
    }
}