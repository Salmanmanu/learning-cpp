#include <iostream>
using namespace std;
int main(){

    int target = 9;
    int nums[] ={2,7,11,15};
    int size = sizeof(nums)/sizeof(nums[0]);
    int n = size;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout<<"[" << i <<"," <<j<<"]";
            }
        }
    }
        return {};
    
    return 0;
}