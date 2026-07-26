class Solution {
private:
    bool possible(vector<int>& arr, int day, int k, int m) {
        int count = 0;
        int noOfB = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= day)
                count++;

            else {
                noOfB += (count / k);
                count = 0;
            }
        }
        noOfB += (count / k);
        return noOfB >= m;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (1ll * k * 1ll * m > bloomDay.size())
            return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while(low<=high){
            int mid = low + (high - low ) / 2 ;
            if(possible(bloomDay , mid , k , m )){
                high = mid - 1  ;
            }
            else{
                low = mid + 1 ;
            }
        }
        return low ;
    }
};