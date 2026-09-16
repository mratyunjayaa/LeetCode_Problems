class Solution {
    private boolean canShip(int[] weights, int max, int days) {
        int count = 1;
        int sum = 0;
        for (int it : weights) {
            if (it + sum > max) {
                count++;
                sum = it;
            } else {
                sum += it;
            }
        }

        return count <= days;
    }

    public int shipWithinDays(int[] weights, int days) {
        int max = weights[0];
        int sum = weights[0];

        for (int i = 1; i < weights.length; i++) {
            max = Math.max(max, weights[i]);
            sum += weights[i];
        }
        int low = max;
        int high = sum;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canShip(weights, mid, days)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
}