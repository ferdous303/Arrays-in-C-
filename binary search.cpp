#include <stdio.h>
int binarySearch(int arr[], int n, int num) 
{
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (num == arr[mid]) 
		{
            return mid;
        }
		 else if (num > arr[mid]) 
		 {
            start = mid + 1;
        } 
		else
		 {
            end = mid - 1;
        }
    }

    return -1;
}

int main() 
{
    int n = 5;
    int arr[n] = {5, 2, 3, 4, 1};

    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++)
		 {
            if (arr[j] > arr[j + 1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
	 {
        printf("%d ", arr[i]);
    }

    int num;
    printf("\nEnter a number to search: ");
    scanf("%d", &num);

    int result = binarySearch(arr, n, num);

    if (result != -1) {
        printf("Number %d found at index %d.\n", num, result);
    } else {
        printf("Number %d not found.\n", num);
    }

    return 0;
}

