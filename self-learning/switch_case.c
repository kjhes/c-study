#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 4;
	switch (a) {
	case 5:
		printf("a");
	case 3:
		printf("b");
	case 1:
		printf("c");
	default:
		printf("d");

	}



	return 0;
}