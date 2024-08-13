#include <iostream>
using namespace std;

int largest(int a[], int n){

    int large = a[0];

    for (int i = 0; i < n ; i++)
        if (a[i] > large){
            large = a[i];
        }
        return large;
}

int main(){

    int a[] = {65,543,5};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<largest(a,n);

    return 0;
}