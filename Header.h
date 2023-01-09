#pragma once

#include <iostream>

template <typename T>
void swap(T* p_a, T* p_b) {
	T* p_c = new T(*p_a);
	*p_a = *p_b;
	*p_b = *p_c;
	delete p_c;
}
//задание 4
void selectionSort(double* arr, int arrSize, int* counter);

// задание 6
void array_change_halfs(double* array, int n_2);

// задание 7
template <typename T>
int local_min(T arr7[], int n7) {
	int counter = 0;
	for (int i = 0; i < n7 - 1; i++) {
		if (arr7[i] < arr7[i - 1] && arr7[i] < arr7[i + 1])
			counter++;
	}
	return counter;
}
// Task 9
void selectionSort_descending(int* arr, int idx_start, int idx_end);

void selectionSort_ascending(int* arr, int idx_start, int idx_end);
