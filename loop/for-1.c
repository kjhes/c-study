#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 1, j = 1;
	for (i; i < 4; i++) {
		for (j; j < 4; j++) {
			printf("%d   %d\n", i, j);
			
		}
		j = 1;

	}





	return 0;
}