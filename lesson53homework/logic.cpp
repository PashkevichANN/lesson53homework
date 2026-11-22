#include "logic.h"

int sum_above_main_diagonal(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column) {

	int sum = 0;

	for (int i = 0; i < row; i++) {

		for (int j = 0; j < column;j++) {

			if (i < j ) {
				sum += matrix[i][j];
			}

		}

	}


	return sum;
}

int sum_below_main_diagonal(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column) {

	int sum = 0;

	for (int i = 0; i < row; i++) {

		for (int j = 0; j < column;j++) {

			if (i > j ) {
				sum += matrix[i][j];
			}

		}

	}


	return sum;
}