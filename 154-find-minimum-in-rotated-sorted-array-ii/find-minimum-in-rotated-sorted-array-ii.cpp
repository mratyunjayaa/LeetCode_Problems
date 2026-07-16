class Solution {
public:
    int findMin(vector<int>& arr) {
        int left = 0, right = arr.size() - 1, ans = INT_MAX;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[left] == arr[mid] && arr[mid] == arr[right]) {
                ans = min(ans,arr[left]);
                left++, right--;
                continue;
            }
            if (arr[left] <= arr[mid]) {
                ans = min(ans, arr[left]);
                left = mid + 1;
            } else {
                ans = min(ans, arr[mid]);
                right = mid - 1;
            }
        }
            return ans;
        }
    };