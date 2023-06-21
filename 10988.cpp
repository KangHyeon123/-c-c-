#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char str[101]; int N = 0; int result = 0;
	scanf("%s", str);
	int k = 0;
	while (str [k] != NULL) {
		N++;
		k++;
	}
	for (int i = 0; i < (N / 2); i++) {
		if (str[i] == str[N - i - 1]) { result++; }
		else { break; }
	}
	if ((N / 2) == result) { printf("%d", 1); }
	else { printf("%d", 0); }
	return 0;
}