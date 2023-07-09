#include<stdio.h>
int main() 
{
    int n = 5;
    int arr1[5] = {2, 7, 9, 3, 6};
    int arr2[5] = {3, 5, 7, 9, 10};
    printf("Common numbers: ");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++)
		 {
            if (arr1[i] == arr2[j])
			 {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}

