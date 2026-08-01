class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {

        int sumA = 0, sumB = 0;

        for (int x : aliceSizes) sumA += x;
        for (int x : bobSizes) sumB += x;

        for (int a : aliceSizes) {
            for (int b : bobSizes) {

                if (sumA - a + b == sumB - b + a) {
                    return {a, b};
                }

            }
        }

        return {};
    }
};