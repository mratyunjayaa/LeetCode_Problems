class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        int i = 0, j = 0, count = 0;

        while(i < arr1.size()) {

            bool flag = true;
            j = 0;

            while(j < arr2.size()) {

                if(abs(arr1[i] - arr2[j]) <= d) {
                    flag = false;
                    break;
                }

                j++;
            }

            if(flag)
                count++;

            i++;
        }

        return count;
    }
};