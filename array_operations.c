#include <stdio.h>

#define MAX_SIZE 100

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size;

    // --- Input Array ---
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // --- Display Original Array ---
    printf("\nOriginal Array: ");
    displayArray(arr, size);

    // ==========================================
    // --- Insertion Operation ---
    // ==========================================
    printf("\n--- Insertion Operation ---\n");

    int insertPos, insertVal;

    printf("Enter position to insert: ");
    scanf("%d", &insertPos);

    printf("Enter value to insert: ");
    scanf("%d", &insertVal);

    // Validate position
    if (insertPos < 0 || insertPos > size) {
        printf("Invalid position! Must be between 0 and %d.\n", size);
        return 1;
    }

    // Shift elements to the right
    for (int i = size; i > insertPos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[insertPos] = insertVal;
    size++;

    printf("Array after insertion: ");
    displayArray(arr, size);

    // ==========================================
    // --- Deletion Operation ---
    // ==========================================
    printf("\n--- Deletion Operation ---\n");

    int deletePos;

    printf("Enter position to delete: ");
    scanf("%d", &deletePos);

    // Validate position
    if (deletePos < 0 || deletePos >= size) {
        printf("Invalid position! Must be between 0 and %d.\n", size - 1);
        return 1;
    }

    // Shift elements to the left
    for (int i = deletePos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Array after deletion: ");
    displayArray(arr, size);

    return 0;
}
