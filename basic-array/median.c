#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate Mean
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    double mean = (double)sum / n;
    printf("Mean: %.2lf\n", mean);

    // Calculate Median
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    double median;
    if (n % 2 == 0) {
        median = (double)(arr[n / 2 - 1] + arr[n / 2]) / 2;
    } else {
        median = arr[n / 2];
    }
    printf("Median: %.2lf\n", median);

    // Calculate Mode
    int mode = 0, maxCount = 0;
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j] == arr[i]) {
                ++count;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    printf("Mode: %d\n", mode);

    return 0;
}

