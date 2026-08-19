class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size() < 2 ) return 1 ;

        unordered_map<int , int > freq ;

        int i = 0 , j = 0 , ans = 0 ;

        while(j < fruits.size()){

            freq[fruits[j]]++;

            while(freq.size() > 2){
                freq[fruits[i]]--;

                if(freq[fruits[i]]==0) freq.erase(fruits[i]);

                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};