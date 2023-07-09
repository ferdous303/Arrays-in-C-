#include <stdio.h>

int main() {
    int n = 5;
    
    float  arr[n];
	
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
	
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%f ", arr[i]);
    }
	
    return 0;
}

