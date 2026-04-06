#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void change(int* p) {
	int b = 20;
	p = &b;

}
int main() {
	int a = 10;
	int* p = &a;

	change(p);

	printf("%d\n", *p);


	return 0;

}






