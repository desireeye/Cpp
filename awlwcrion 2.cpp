#include <iostream>

using namespace std;

void selectionsort(int A[], int n) {
    int i, j, minpos, temp;

    for (i = 0; i < n - 1; i++) {
        minpos = i;

        for (j = i + 1; j < n; j++) {
            if (A[j] < A[minpos]) {
                minpos = j;
            }
        }

        if (minpos != i) {
            temp = A[i];
            A[i] = A[minpos];
            A[minpos] = temp;
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionsort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


