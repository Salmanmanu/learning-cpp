#include <iostream>
#include <vector>
using namespace std;

int findIndex(const vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1; // Not found
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 3;
    cout << "Index of target: " << findIndex(nums, target) << endl;
    return 0;
}
