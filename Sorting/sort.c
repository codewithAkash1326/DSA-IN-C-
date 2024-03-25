#include <stdio.h>

void bubble_sort(int array[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // swap elements
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[10];
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
 

    // sort array
    bubble_sort(array, n);

    // print sorted array
    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
