#pragma once
#include <iostream>
#include "structs.h"
#include <algorithm>
struct route;
template <class Array>
void fill_array(Array array, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter end of ways name: " << endl;
		cin >> array[i].end_of_way;
		cout << "Enter lenght: " << endl;
		cin >> array[i].length;
	}
}
template <class Array>
void buble_sort_for_length(Array array, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j].length > array[j+1].length) {
				swap(array[j].length, array[j + 1].length);
			}
		}
	}
}
template <class Array>
void insert_sort_for_string(Array array, int size) {
	for (int i = 1; i < size; i++) {
		string t = array[i].end_of_way;
		for (int j = i - 1; j > -1 && t < array[j].end_of_way; j--) {
			array[j + 1].end_of_way = array[j].end_of_way;
			array[j].end_of_way = t;
		}
	}
}
template <class Array>
void cout_array(Array array, int size) {
	for (int i = 0; i <size; i++) {
		cout << "New end of way is : " << array[i].end_of_way << endl;
		cout << "New lenght is : " << array[i].length << endl;
	}
}
