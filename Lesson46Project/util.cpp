#include <string>
#include "main.h"
#include "util.h"

string convert(int* vector, int size) {
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(vector[i]) + " ";
	}

	return msg;
}


void rand_init(int* vector, int size, int bound) {
	for (int i = 0; i < size; i++)
	{
		vector[i] = rand() % bound;
	}
}
