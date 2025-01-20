#include<iostream>
using namespace std;

int sumOfArray(int *arr, int n){
    int totalSum = 0;
    for(int i=0; i<n; i++){
        totalSum += *(arr + 1);
    }
    return totalSum;
}

void changeVariable(int *n1){
    *(n1) ++;
}

int main() {
    int arr[6] = {0,1,2,3,4,5};
    int n = 10;
    int *ptr = &n;
    changeVariable(ptr);
    cout <<"this pointer" << endl;
    return 0;
}