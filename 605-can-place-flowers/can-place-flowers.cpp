class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbad, int n) {
        for(int i = 0 ; i < flowerbad.size() ; i++) {
            if(flowerbad[i] == 0) {
                if((i == 0 || flowerbad[i-1] == 0) &&
                   (i == flowerbad.size()-1 || flowerbad[i+1] == 0)) {

                    flowerbad[i] = 1;
                    n--;
                }
            }
        }
        return n <= 0;
    }
};