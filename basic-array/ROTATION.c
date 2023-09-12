#include <stdio.h>

int main() {
    // Example array
    int OA[] = {1, 2, 3, 4, 5, 6, 7};
    
    // Size of the array
    int n = sizeof(OA) / sizeof(OA[0]);
    
    // Rotation amount
    int RA = 2;
    
    // Rotate array to the left
    printf("Array rotated left: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", OA[(i + RA) % n]);
    }
    printf("\n");
    
    // Rotate array to the right
    printf("Array rotated right: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", OA[(i - RA + n) % n]);
    }
    printf("\n");
    
    return 0;
}

