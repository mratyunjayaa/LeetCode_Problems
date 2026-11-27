class Solution {
    public boolean canAliceWin(int n) {
        int turn = 10 ;
        while(n>=turn){
            n = n - turn ;
            turn-=1;
        }
        if(turn%2==0) return false;
        return true;
    }
}