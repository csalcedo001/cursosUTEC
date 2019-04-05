#include <iostream>

using namespace std;

int main (void) {
	int T; // Test cases

	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int N; // Number of walls

		cin >> N;

		int current, previous;

		cin >> previous;
		
		int highJumps = 0, lowJumps = 0;

		while (--N) {
			cin >> current;

			if (current > previous) {
				++highJumps;
			} else if (current < previous) {
				++lowJumps;
			}

			previous = current;
		}

		cout << "Case " << t << ": " << highJumps << ' ' << lowJumps << endl;
	}

	return 0;
}
