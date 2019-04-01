#ifndef FUNCH
#define FUNCH

void deleteBackSpaces(char *str, int length) {
	for (int charIndex = length - 1; charIndex >= 0 && str[charIndex] == ' '; --charIndex) {
		str[charIndex] = '\0';
	}
}

#endif
