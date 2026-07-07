class Solution {
private:
    int fibbon(int n, vector<int>& dp) {
        if (n <= 1)
            return n;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = fibbon(n-1 , dp) + fibbon(n-2 , dp) ;
    }

public:
    int fib(int n) {
        // Optimized

        vector<int> dp(n + 1, -1);
        return fibbon(n, dp);
    }
};