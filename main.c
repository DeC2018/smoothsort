#include <stdio.h>
#include <stdlib.h>

void smoothsort(int arr[], int n) {
    int i, j, k, p, q, r, s, t, tmp;
    int *buf = (int*) malloc(n * sizeof(int));

    for (p = 0; p < n; p += 2) {
        for (q = p + 2; q < n; q += 2) {
            if (arr[p] > arr[q]) {
                tmp = arr[p];
                arr[p] = arr[q];
                arr[q] = tmp;
            }
        }
    }

    for (r = 1; r < n - 1; r += 2) {
        for (s = r + 2; s < n; s += 2) {
            if (arr[r] > arr[s]) {
                tmp = arr[r];
                arr[r] = arr[s];
                arr[s] = tmp;
            }
        }
    }

    for (i = 0; i < n - 1; i += 2) {
        for (j = i + 2; j < n; j += 2) {
            if (arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for (k = 1; k < n - 1; k += 2) {
        for (t = k + 2; t < n; t += 2) {
            if (arr[k] > arr[t]) {
                tmp = arr[k];
                arr[k] = arr[t];
                arr[t] = tmp;
            }
        }
    }

    free(buf);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    smoothsort(arr, n);

    printf("Sorted array:   ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
