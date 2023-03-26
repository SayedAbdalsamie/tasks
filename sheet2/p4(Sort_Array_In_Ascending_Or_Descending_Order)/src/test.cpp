#include "test.h"

#include <stdio.h>

int main() {
    int array[100], n, i, j, temp, choice;

    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);

    // Sorting the array in ascending order
    if (choice == 1) {
        for (i = 0; i < n-1; i++) {
            for (j = i+1; j < n; j++) {
                if (array[i] > array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        printf("Array sorted in ascending order: ");
    }

    // Sorting the array in descending order
    else if (choice == 2) {
        for (i = 0; i < n-1; i++) {
            for (j = i+1; j < n; j++) {
                if (array[i] < array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        printf("Array sorted in descending order: ");
    }

    // Invalid choice entered by user
    else {
        printf("Invalid choice.");
        return 0;
    }

    // Printing the sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
