#include <iostream>
#include <vector>

using namespace std;

int main (void) {
	int M;

	cin >> M;

	vector<vector<int>> v(M);

	int n;

	while (cin >> n) {
		v[n % M].push_back(n);
	}

	for (int i = 0; i < v.size(); i++) {
		cout << i << ':';
		for (auto e : v[i]) {
			cout << ' ' << e;
		}
		cout << endl;
	}

	return 0;
}
