#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;
        int idx = n - 1;

        while (left <= right) {
            if (abs(arr[left]) > abs(arr[right])) {
                ans[idx] = arr[left] * arr[left];
                left++;
            } else {
                ans[idx] = arr[right] * arr[right];
                right--;
            }
            idx--;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {-7, -3, 2, 3, 11};

    vector<int> result = obj.sortedSquares(arr);

    cout << "Sorted Squares: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}