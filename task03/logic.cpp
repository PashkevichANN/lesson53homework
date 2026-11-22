#include "logic.h"

int sum_below_secondary_diagonal(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int size) {

	int sum = 0;

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size;j++) {

			if (i + j == size + 2) {
				sum += matrix[i][j];
			}

		}

	}


	return sum;
}

int sum_above_secondary_diagonal(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int size) {

	int sum = 0;

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size;j++) {

			if (i + j == size) {
				sum += matrix[i][j];
			}

		}

	}


	return sum;
}