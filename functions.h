#pragma once // директива препроцесса, исключает импорт данного файла
#include <iostream>

// прототипы функций

// в дополнительных файлах используем std::, без using namespace std

// Далее создаём исходный файл, где будет описание функций

// Returns A + B
int sum(int A, int B);

void fillArr(int arr[], int length, int A, int B);

template <typename T> void showArr(T arr[], int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

