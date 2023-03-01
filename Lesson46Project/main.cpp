#include <iostream>

using namespace std;

string convert(int* vector, int size);
void rand_init(int* vector, int size, int bound);
int max(int* vector, int size);
int min(int* vector, int size);

// стартовая точка в приложение
int main() {
	int size;

	cout << "Введите размерность вектора: ";
	cin >> size;

	int* vector = new int[size];

	rand_init(vector, size, 100);

	delete[] vector;

	return 0;
}