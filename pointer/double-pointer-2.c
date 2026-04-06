#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void change(int* p) {
//	int b = 20;
//	p = &b;
//
//}
//int main() {
//	int a = 10;
//	int* p = &a;
//
//	change(p);
//
//	printf("%d\n", *p);
//
//
//	return 0;
//
//}
void change(int** pp) {
	int b = 20;
	*pp = &b; //두개를 쓰지않고 하나만 쓰면 값을 의미한다

}
int main() {
	int a = 10;
	int* p = &a;

	change(&p);

	printf("%d\n", *p);


	return 0;

}







