#include <iostream>

using namespace std;

string convert(int* vector, int size);
void rand_init(int* vector, int size, int bound);
int max(int* vector, int size);
int min(int* vector, int size);


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