#include <stdio.h>

int main() {
    int a[5] = {2,7,9,3,6};
    int b[5] = {3,5,7,9,10};
    for (int i = 0; i < 5; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (a[i] == b[j]) {
                count++;
            }
        }
        if (count == 0) {
            printf("%d ", a[i]);
        }
    }
    
    return 0;
}

