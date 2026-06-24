#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    void reverseArray(vector<int> &arr) {
        int i = 0;
        while (i < arr.size() / 2) {
            swap(arr[i], arr[arr.size() - 1 - i]);
            i++;
        }
    }
};



int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    Solution obj;
    obj.reverseArray(arr);

    cout << "Reversed array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}