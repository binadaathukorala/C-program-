#include <stdio.h>
#define loop for (int i = 0; i < size - 1; i++)

void selectionSort(int array[], int size) {
    int s, temp;

    loop {
        s = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[s]) {
                s = j;
            }
        }
        temp = array[i];
        array[i] = array[s];
        array[s] = temp;
    }
}

int main() {
    int arr[10];
    printf("Enter 10 numbers\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
