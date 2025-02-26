#include <iostream>
using namespace std;

void repeatArray(int arr[], int size, int arrF[], int &newSize) {
    newSize = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                bool found = false;
                for (int k = 0; k < newSize; k++) {
                    if (arrF[k] == arr[i]) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    arrF[newSize] = arr[i];
                    newSize++; 
                }
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int arrF[size]; 
    int newSize = 0;

    repeatArray(arr, size, arrF, newSize);

    if (newSize == 0) {
        cout << "No repeating elements found." << endl;
    } else {
        cout << "Repeating elements: ";
        for (int i = 0; i < newSize; i++) {
            cout << arrF[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
