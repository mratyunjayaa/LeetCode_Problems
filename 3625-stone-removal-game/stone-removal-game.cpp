class Solution {
public:
    bool canAliceWin(int n) {
        int turn = 10 ;

        while(n >= turn ){
            n = n - turn ;
            turn--;
        }
        if(turn%2==0) return false;

        return true;
    }
};