#include "logic.h"

int max(int* vector, int size) {
	int value = vector[0];

	for (int i = 1; i < size; i++)
	{
		if (value < vector[i]) {
			value = vector[i];
		}
	}

	return value;
}

int min(int* vector, int size) {
	int value = vector[0];

	for (int i = 1; i < size; i++)
	{
		if (value > vector[i]) {
			value = vector[i];
		}
	}

	return value;
}