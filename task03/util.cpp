#include "util.h"
#include <string>

string convert(int matrix[DEFAULT_SIZE], int size) {
	string s = "";

	for (int i = 0;i < size; i++) {

		for (int j = 0; j < size; j++) {

			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}
	return s;
}

void init(int matrix[DEFAULT_SIZE][DEFAULT_SIZE],
	int row, int column, int a, int b) {

	for (int i = 0; i < row; i++) {

		for (int j = 0; j < column; j++) {
			matrix[i][j] = rand() % (b - a + 1) + a;
		}

	}

}

void print(string text) {
	cout << text;
}