#include <iostream>

#include "insertionSort.h"

using namespace std;

int main (void) {
	std::vector<int> v = {3, 5, 4, 3, 5, 7, 4, 5, 4};

	insertionSort(v);

	cout << "v:";

	for (auto i : v) {
		cout << ' ' << i;
	}
	
	cout << endl;

	return 0;
}
