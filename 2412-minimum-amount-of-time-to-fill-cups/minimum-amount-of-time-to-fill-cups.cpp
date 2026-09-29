class Solution {
public:
    int fillCups(vector<int>& amount) {
        int total = amount[0] + amount[1] + amount[2];

        int largest = max(amount[0], max(amount[1], amount[2]));

        return max(largest, (total + 1) / 2);
    }
};