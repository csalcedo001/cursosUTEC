#ifndef FUNCH
#define FUNCH

void setBackSpace(char str[], int length) {
	for (int i = 0; i < length; ++i) {
		if (str[i] == '\0') {
			str[i] = ' ';
		}
	}
}

#endif
