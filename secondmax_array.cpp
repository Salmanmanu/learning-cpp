#include <iostream>
using namespace std;

int second_max(int arr[], int size){
    int max = arr[0];
    int second_larg;
    for(int i = 0 ; i < size ; i++){
        if(arr[i]>max){
            second_larg = max;//updating the second largest befor the max
            max = arr[i];
        }
    }
    return second_larg;
}

int main(){

    int arr[] = {45,87,321,356,54,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< second_max(arr,size);
    return 0;
}