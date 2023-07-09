#include <stdio.h>
int indexOfLargest(int arr[], int n) {
    int largest = arr[0];
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            index = i;
        }
    }

    return index;
}

int main() {
    int n = 5;
    int arr[5] = {2, 7, 9, 3, 6};

    int maxIndex = indexOfLargest(arr, n);
    printf("Index of the maximum value in the array: %d\n", maxIndex);

}

