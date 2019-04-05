#include <iostream>
#include <cctype>

using namespace std;

bool isPalindrome(std::string s) {
	int iLeft = 0, iRight = s.length() - 1;

	while (iLeft < iRight) {
		while (!isalpha(s[iLeft])) {
			++iLeft;
		}

		while (!isalpha(s[iRight])) {
			--iRight;
		}

		if (tolower(s[iLeft]) != tolower(s[iRight])) {
			return false;
		}

		++iLeft;
		--iRight;
	}

	return true;
}

int main (void) {
	std::string s;
	
	getline(cin, s);

	while (s != "DONE") {
		if (isPalindrome(s)) {
			cout << "You won't be eaten!" << endl;
		} else {
			cout << "Uh oh.." << endl;
		}

		getline(cin, s);
	}

	return 0;
}
