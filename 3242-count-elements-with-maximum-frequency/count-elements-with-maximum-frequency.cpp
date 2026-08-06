class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int>mp ;
        for(auto it : nums){
            mp[it]++;
        }
        int maxFreq = 0;
        int total = 0;
        for(auto pair : mp) {
            int freq = pair.second;
            
            if(freq > maxFreq) {
                maxFreq = freq;
                total = freq;      
            } 
            else if(freq == maxFreq) {
                total += freq;       
            }
        }

        return total;
    
    }
};