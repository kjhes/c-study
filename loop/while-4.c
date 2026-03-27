#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a=1, b=1;
	while (a < 4) {
		
		while (b <= 3) {
			printf("%d   ", a);
			printf("%d\n", b);
			b++;
		}
		b = 1;
		a++;
	}






	return 0;
}