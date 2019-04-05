#include <iostream>
#include <map>

using namespace std;

int main (void) {
	int T;

	cin >> T;

	map<string, int> count;

	while (T--) {
		std::string country, rest;

		cin >> country;

		getline(cin, rest);

		if (count.find(country) != count.end()) {
			count[country]++;
		} else {
			count[country] = 1;
		}
	}

	for (auto p : count) {
		cout << p.first << ' ' << p.second << endl;
	}

	return 0;
}
