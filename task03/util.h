#include <iostream>
#include <string>
#define DEFAULT_SIZE 100

using namespace std;

string convert(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int size);
	
void init(int matrix[DEFAULT_SIZE][DEFAULT_SIZE],
	int size, int a, int b);

void print(string text);