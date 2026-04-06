//포인터의 증감 연산

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int i = 10;
	int* pi = &i; //i주소를 포인터 변수 pi에 넣는다. 포인터 변수는 선언할때 *를 포함한다.
	//i의 주소를 넣을때 반드시 pi와 자료형이 같아야 한다.

	printf("i = %d , pi = %p\n", i, pi); //%p는 주소 지정자 i의 주소를 프린트함.
	//메모리 주소는 2진수로 저장되지만 우리에게 보여줄 때는 16진수로 나온다.

	(*pi)++;
	//()가 먼저 작용함 *pi 는 이미 선언한 포인터 변수이기 때문에 값을 의미함 여기에 ++가 붙으니 값을 1만큼 증가시킨다

	printf("i = %d , pi = %p\n", i, pi); // 11이 출력됨


	*pi++; //*pi -> i를 가르키는데 그 값(* 있으므로)-> 11-> ++는 주소 증가로 들어감(int면 4바이트 증가 double 8바이트 증가)
	printf("i = %d , pi = %p\n", i, pi); //11
	printf("%d", *pi);

	return 0;
}