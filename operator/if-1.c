#include <stdio.h>
int main() {
	//int a = 8, b = 10, c;
	//if (a++ >= b--) //a=9 지만 8로 계산 , b=9 지만 10으로 계산
	//	c = a - b;

	////if 가 성립하지 않더라도 일단 조건을 만족하는지 알기 위해 
	//// 실행되었기 떄문에 a++과 b--가 적용되서 a와 b값이 변했다
	//else
	//	c = a + b; //9+9
	//printf("a=%d\n", a);
	//printf("b=%d\n", b);
	//printf("c=%d", c);

	int num1 = 16, num2 = 80;
	printf("%d", num1 > num2 ? num1 & num2 : num1 ^ num2);




	return 0;
}