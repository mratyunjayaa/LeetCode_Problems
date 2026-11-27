class Solution {
    public boolean canAliceWin(int n) {
        int turn = 10 ;
        while(n>=turn){
            n -= turn ;
            turn-=1;
        }
        return turn % 2 != 0;
    }
}