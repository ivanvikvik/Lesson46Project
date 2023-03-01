#include <iostream>

using namespace std;

string convert(int* vector, int size);
void rand_init(int* vector, int size, int bound);


int main() {
	int size;

	cout << "Input size of vector: ";
	cin >> size;

	int* vector = new int[size];

	rand_init(vector, size, 100);

	delete[] vector;

	return 0;
}