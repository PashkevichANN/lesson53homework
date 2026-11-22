#include "logic.h"
int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int size;

	do {
		system("cls");
		print("Input size of matrix (NxM): ");
		cin >> size;
	} while (size <= 0);


	init(matrix, size, -10, 10);
	print("Matrix:\n");
	print(convert(matrix, size));

	int sum1 = sum_below_secondary_diagonal(matrix, size);
	print("Sum of numbers below secondary diagonal: " + to_string(sum1) + "\n");

	int sum2 = sum_above_secondary_diagonal(matrix, size);
	print("Sum of numbers below secondary diagonal: " + to_string(sum2) + "\n");

	return 0;
}