#include "main.h"
#include "util.h"
#include "logic.h"


int main() {
	int size;

	cout << "Input size of vector: ";
	cin >> size;

	int* vector = new int[size];

	rand_init(vector, size, 100);
	cout << "Vector: " << convert(vector, size) << endl;;

	cout << "Vecotr max value: " << max(vector, size) << endl;
	cout << "Vecotr min value: " << min(vector, size) << endl;

	delete[] vector;

	return 0;
}