class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map <int , int>mp;
        int count = 0 ; 
        for(auto t : time){
            int rem = t % 60;
            int complement = (60 - rem ) % 60 ;
            if(mp.count(complement)){
                count+= mp[complement] ;
            }
            mp[rem]++;
        }
        return count ;
    }
};