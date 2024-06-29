#include <stdio.h>

// Function to read array elements from the user
void readArray(int arr[], int size) {
    printf("Enter Array Elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to calculate the sum of array elements
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[100], size, sum;

    printf("Enter Array Size (up to 100):\n");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid array size. Please enter a size between 1 and 100.\n");
        return 1; // Return 1 to indicate error
    }

    readArray(arr, size); // Read array elements from user

    sum = calculateSum(arr, size); // Calculate sum of array elements

    printf("Sum of the Array = %d\n", sum);

    return 0;
}
