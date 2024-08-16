#include <iostream>
#include <vector>
using namespace std;

int findSmallest(const vector<int>& nums) {
    int smallest = nums[0];
    for (int num : nums) {
        if (num < smallest) {
            smallest = num;
        }
    }
    return smallest;
}

int main() {
    vector<int> nums = {5, 3, 8, 1, 2};
    cout << "Smallest number: " << findSmallest(nums) << endl;
    return 0;
}
