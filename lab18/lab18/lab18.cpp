#include <iostream>
#include "util.h"
#include "structs.h"

int main()
{
	using namespace std;
	int size;
	cout << "Enter size of array: " << endl;
	cin >> size;
	route* array = new route[size];
	fill_array(array, size);
	buble_sort_for_length(array, size);
	insert_sort_for_string(array, size);
	cout_array(array, size);
	return 0;
}

