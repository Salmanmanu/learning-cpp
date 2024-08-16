#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int n) {
    int count = 0, candidate = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
        }
        count += (arr[i] == candidate) ? 1 : -1;
    }

    return candidate;
}

int main() {
    int arr[] = {2, 2, 1, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int majority = findMajorityElement(arr, n);
    cout << "Majority element is: " << majority << endl;

    return 0;
}
