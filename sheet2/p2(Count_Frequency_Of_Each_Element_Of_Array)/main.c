#include <stdio.h>

int main() {
    int array[100];
    int frequency[100];
    int n, i, j, count;

    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
        frequency[i] = -1;
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i+1; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
                frequency[j] = 0;
            }
        }
        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    printf("The frequency of elements in the array are: \n");
    for (i = 0; i < n; i++) {
        if (frequency[i] != 0) {
            printf("%d occurs %d times\n", array[i], frequency[i]);
        }
    }

    return 0;
}

