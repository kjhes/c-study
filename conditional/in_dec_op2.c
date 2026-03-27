#include <stdio.h>

int main() {

	int a, b,c;
	a = 5 % 3; //2(나머지)
	a--; //1
	b = (a++) + 3; //1+3
	printf("%d, %d\n", a, b); //2,4
	c = (++a) + 3; //3+3
	printf("%d,%d,%d", a, b, c); //3,4,6








	//2,4
	//3,4,6
	return 0;
}