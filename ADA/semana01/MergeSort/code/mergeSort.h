#include <vector>

void mergeSort(std::vector<int>& v) {
	if (v.size() == 1) {
		return;
	}
	
	int mid = v.size() / 2;
	std::vector<int> left, right;
	
	for (int i = 0; i < mid; i++) {
		left.push_back(v[i]);
	}
	
	for (int i = mid; i < v.size(); i++) {
		right.push_back(v[i]);
	}
	
	mergeSort(left);
	mergeSort(right);
	
	int l = 0, r = 0;
	
	for (int i = 0; i < v.size(); i++) {
		if (l >= left.size()) {
			v[i] = right[r];
		} else if (r >= right.size()) {
			v[i] = left[l];
		} else 
	}	
}
