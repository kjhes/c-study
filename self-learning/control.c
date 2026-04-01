#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int cut = 0;
	for (int i = 1; ; i++) {
		if (i > 10) {
			break;
		}
		if (i % 3 == 0) {
			cut++;
		}
	}

	printf("3의 배수 개수 : %d\n", cut);

	return 0;
}