class Solution {
    public int integerBreak(int n) {
        if(n == 2) return 1;
        if(n == 3) return 2;

        if(n < 6){
            int a1 = n / 2;
            int b1 = n-a1;
            return a1*b1;
        }
        else if(n%3 == 0){
            int ans = n/3;
            return (int)Math.pow(3, ans);
        }
        else if(n%3 == 1){
            int a1 = n / 3 - 1;
            return (int)Math.pow(3, a1) * 4;
        }
        else{
            int a1 = n/3;
            return (int)Math.pow(3, a1) * 2;
        }
    }
}