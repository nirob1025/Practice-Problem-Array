
#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of an array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    i = n - 1;
    j = n - 2;
    while (i > 0) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i--;
        j--;
    }
    printf("Modified array:\n");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}
