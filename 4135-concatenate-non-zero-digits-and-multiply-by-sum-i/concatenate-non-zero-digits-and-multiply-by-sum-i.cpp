class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        if (n == 0)
            return  0;
        string str = "";
        while (n > 0) {
            int rem = n % 10;
            if (rem != 0) {
                sum += rem;
                str += to_string(rem);
            }
            n /= 10;
        }
        reverse(str.begin(), str.end());
        if (str.empty())
            return 0;
        long long ans = stoll(str);
        return ans * sum;
    }
};