#include <stdio.h>
int second_largest(int arr[], int n) {
    int largest = arr[0];
    int second_largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
		 else if (arr[i] > second_largest && arr[i] != largest)
		  {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main()
 {
    int n = 5;
    int arr[5] = {2, 7, 9, 3, 6};

    int second_max = second_largest(arr, n);

    printf("Second largest value in the array: %d\n", second_max);
}


