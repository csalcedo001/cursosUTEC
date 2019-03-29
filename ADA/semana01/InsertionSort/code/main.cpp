#include <iostream>
#include <vector>

#include "insertionSort.h"

using namespace std;

int main (void) {
	int n;
	
	cin >> n; // Size of vector
	
	vector<int> v;
	
	while (n--) {
		int x;
		
		cin >> x;
		
		v.push_back(x);
	}
	
	insertionSort(v);
	
	for (auto i : v) {
		cout << i << ' ';
	}
	
	cout << endl;
	
	return 0;
}
