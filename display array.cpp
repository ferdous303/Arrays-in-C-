#include <stdio.h>

int main()
 {
    int n = 5; 
    
    int arr[n];
	
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	
    return 0;
}

