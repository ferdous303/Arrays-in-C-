#include<stdio.h>

int find_sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
 {
    int n = 5;
    int arr[5] = {2, 7, 9, 3, 6};
    int SUM = find_sum(arr, n);
    printf("The sum is: %d\n", SUM);
    return 0;
}

