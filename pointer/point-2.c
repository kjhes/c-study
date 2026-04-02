#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 3000;
	int* p = NULL; //포인트 변수를 선언하면 서 NULL 0을 넣어 초기값으로 들어가 있던 쓰레기값을 없앰

	p = &i; // i변수의 주소를 p 포인터 변수에 줌

	printf("p = %p\n", p);
	// %p : 주소를 출력하는 서식 문자
	printf("&i = %p\n\n", &i); 

	i = 4000;
	printf(" i = %d\n", i);
	printf(" *p = %d\n", *p);
	*p = 5000;

	printf(" i = %d\n", i);
	printf(" *p = %d\n", *p);
	//주소에 저장된 내용에 접근하는 포인터
	// p 와 i 의 주소가 똑같으니 둘이 가지는 값도 같음.

	int x = 10, y = 20;
	int* pi; //포인터 변수

	pi = &x; //x의 주소를 pi에 저장
	printf(" pi = %p\n", pi); //x의 주소 출력
	printf(" *pi = %d\n", *pi); //x의 값 출력
	pi = &y; //y의 주소를 pi에 저장
	printf(" pi = %p\n", pi); //y의 주소 출력
	printf(" *pi = %d\n", *pi); //y의 값 출력


	return 0;
	
}