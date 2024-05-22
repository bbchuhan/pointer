#include <stdio.h>

void squareArray(int *arr, int size) {
    printf("Square of each element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d, ", (*arr) * (*arr));
        arr++;
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the array's size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    squareArray(arr, size);

    return 0;
}
