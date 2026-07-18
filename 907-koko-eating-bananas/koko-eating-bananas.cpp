class Solution {
private:
    int canEat(vector<int>& piles, int h, int k) {
        long long hours = 0;
        for (auto pile : piles) {
            hours += (pile + k - 1) / k;
        }
        if (hours > h)
            return false;
        return hours <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int low = 1, ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canEat(piles, h, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};