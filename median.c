#include<stdio.h>
#include<stdlib.h> 
int main() {
	int size1, size2;

	// Get user input for the size of arr1 and arr2
	printf("Enter the size of the first array: ");
	scanf("%d", &size1);

	printf("Enter the size of the second array: ");
	scanf("%d", &size2);

	// Handle corner case where both arrays have size 0
	if (size1 == 0 && size2 == 0) {
		printf("Both arrays are empty. No median can be calculated.\n");
		return 0;
	}

	// Dynamically allocate memory for the arrays
	int *arr1 = (int *)malloc(size1 * sizeof(int));
	int *arr2 = (int *)malloc(size2 * sizeof(int));
	int *merged = (int *)malloc((size1 + size2) * sizeof(int));

	// Check if memory allocation is successful
	if (arr1 == NULL || arr2 == NULL || merged == NULL) {
		printf("Memory allocation failed.\n");
		return 1; // Exit the program with error code 1
	}

	// Get user input for arr1
	if (size1 > 0) {
		printf("Enter %d elements for the first array:\n", size1);
		for (int i = 0; i < size1; i++) {
			scanf("%d", &arr1[i]);
		}
	}

	// Get user input for arr2
	if (size2 > 0) {
		printf("Enter %d elements for the second array:\n", size2);
		for (int i = 0; i < size2; i++) {
			scanf("%d", &arr2[i]);
		}
	}

	// Merging the arrays
	for (int i = 0; i < size1; i++) {
		merged[i] = arr1[i];
	}
	for (int j = 0; j < size2; j++) {
		merged[j + size1] = arr2[j];
	}

	// Sorting the merged array using Bubble Sort
	for (int i = 0; i < size1 + size2; i++) {
		for (int j = 0; j < size1 + size2 - i - 1; j++) {
			if (merged[j] > merged[j + 1]) {
				int temp = merged[j];
				merged[j] = merged[j + 1];
				merged[j + 1] = temp;
			}
		}
	}

	// Printing the sorted merged array
	printf("The sorted array is:\n");
	for (int i = 0; i < size1 + size2; i++) {
		printf("%d\n", merged[i]);
	}

	// Calculating the median
	double median;  // Use double to ensure float precision
	int totalSize = size1 + size2;

	if (totalSize == 0) {
		printf("No elements in merged array. Cannot compute median.\n");
		return 0;
	}

	if (totalSize % 2 == 0) {
		// If the number of elements is even
		median = (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
	} else {
		// If the number of elements is odd
		median = merged[totalSize / 2];
	}

	// Printing the median
	printf("The median is: %.2f\n", median);

	// Freeing dynamically allocated memory
	free(arr1);
	free(arr2);
	free(merged);

	return 0;
}

