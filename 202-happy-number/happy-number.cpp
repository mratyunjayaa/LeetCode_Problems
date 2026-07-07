class Solution {
public:
    bool happy(int num, unordered_set<int>& vis) {
        if (num == 1)
            return true;

        long long square = 0;

        if (vis.count(num))
            return false;

        vis.insert(num);

        while (num > 0) {
            int rem = num % 10;
            square += rem * rem;
            num /= 10;
        }
        return happy(square,vis);
    }
    bool isHappy(int n) { 
        unordered_set<int> vis;

        return happy(n,vis); 
        }
};