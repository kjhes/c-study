#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i = 10;
	char c = 69;
	float f = 12.3;
	printf("i의 값: %d \n", i);
	printf("c의 값: %c \n", c);
	printf("f의 값: %f \n", f);
	
	printf("i의 주소: %p \n", &i);
	printf("c의 주소: %p \n", &c);
	printf("f의 주소: %p \n", &f);
	// &p는 메모리 주소로 실행할 때마다 바뀐다.
}