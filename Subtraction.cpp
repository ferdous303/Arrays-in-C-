#include <stdio.h>
#define rows 3
#define cols 3

void input(int A[][cols])
 {
    for (int i = 0; i < rows; i++)
	 {
        for (int j = 0; j < cols; j++) 
		{
            scanf("%d", &A[i][j]);
        }
    }
}

void subtract(int A[][cols], int B[][cols], int C[][cols])
 {
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

int main() {
    int A[rows][cols], B[rows][cols], C[rows][cols];
    
    printf("Enter elements of matrix A:\n");
    input(A);
    
    printf("Enter elements of matrix B:\n");
    input(B);
    
    subtract(A, B, C);
    
    printf("Resultant matrix C after subtraction:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

