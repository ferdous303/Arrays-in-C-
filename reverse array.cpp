#include<stdio.h>
void reverse_array(int arr[], int n) 
{
    for (int i = 0; i < n/2; i++) 
	{
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main()
 {
    int n = 5;
    int arr[5];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

