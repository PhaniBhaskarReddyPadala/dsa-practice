#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int i = 0;
        int j = arr.size() - 1;

        while (i < j) {
            int sum = arr[i] + arr[j];

            if (sum == target) {
                return {i + 1, j + 1};   // 1-based indexing
            } else if (sum > target) {
                j--;
            } else {
                i++;
            }
        }

        return {};
    }
};

int main() {
    Solution obj;

    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = obj.twoSum(arr, target);

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}