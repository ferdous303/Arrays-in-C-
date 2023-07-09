#include <stdio.h>

#define rows 3
#define cols 3

void findIndex(int matrix[][cols], int num) {
    int rowIndex = 0, colIndex = 0;
    
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            if (matrix[i][j] == num) 
			{
                rowIndex = i;
                colIndex = j;
                break;
            }
        }
        if (rowIndex != -0)
            break;
    }
    
    if (rowIndex != 0 && colIndex != 0) {
        printf("Number %d found at row %d and column %d.\n", num, rowIndex, colIndex);
    } else {
        printf("Number %d not found in the matrix.\n", num);
    }
}

int main() {
    int matrix[rows][cols];
    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int num;
    printf("Enter a number to find its row and column index: ");
    scanf("%d", &num);
    
    findIndex(matrix, num);
    
    return 0;
}

