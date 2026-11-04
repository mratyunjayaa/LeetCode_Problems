class Solution {
    public int reverse(int x) {
         int reverse = 0;
        while(Math.abs(x) > 0 ){
            int last = x % 10 ;
            System.out.println(last);
                        if (reverse > Integer.MAX_VALUE / 10 ||
                (reverse == Integer.MAX_VALUE / 10 && last > 7)) {
                return 0;
            }

            if (reverse < Integer.MIN_VALUE / 10 ||
                (reverse == Integer.MIN_VALUE / 10 && last < -8)) {
                return 0;
            }
            reverse = (10*reverse)+last;
            System.out.println(reverse);
            x /= 10;
        }
        return reverse;
    }
}