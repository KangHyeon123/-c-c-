#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int N;
	scanf("%d", &N);
	for (int i = 1; i < 2*N; i++) {
		if (i < N) {
			for (int j = 0; j < N-i; j++) printf(" ");
			for (int k = 1; k < (2*i); k++) printf("*");
		}
		else if (i == N) for (int j = 1; j < 2 * N; j++) {
			printf("*");
		}
		else {
			for (int k = 0; k < i-N; k++) printf(" ");
			for (int j = 1; j < 2*(2*N-i); j++) printf("*");
		}
		printf("\n");
	}
	return 0;
}