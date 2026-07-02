#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;
        int low = 0, high = nums.size() - 1;

        // Find first occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                start = mid;
                high = mid - 1;   // Search left half
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // Reset boundaries
        low = 0;
        high = nums.size() - 1;

        // Find last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                end = mid;
                low = mid + 1;    // Search right half
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return {start, end};
    }
};

int main() {
    Solution obj;

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> ans = obj.searchRange(nums, target);

    cout << "First Position: " << ans[0] << endl;
    cout << "Last Position : " << ans[1] << endl;

    return 0;
}