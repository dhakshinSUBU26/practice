#include<iostream>
#include<vector>
using namespace std;
//bubbleSort//
void bubbleSort(int arr[],int size){
    for(int i =0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }

}
//to check whether arr elements are equal//
bool equalArr(int a[],int b[],int size){
    bubbleSort(a,size);
    bubbleSort(b,size);
    for(int i=0;i<size;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;

}
//main //
int main(){
    int a[] = {1, 2, 5, 9, 0};
    int b[] = {2, 4, 5, 0, 1};
    int size = sizeof(a) / sizeof(a[0]);

    if (equalArr(a, b, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
