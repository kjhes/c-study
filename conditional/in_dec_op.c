#include <stdio.h>
int main() {

	//증가감소연산자
	//++a 예) printf("%d", ++a) -> 5였던 a가 1증가된 후 6을 출력
	//a++ 예) printf("%d", a++) -> 5를 출력한 후 1증가되어 6이 됨
	//--a 예) printf("%d", --a) -> 5였던 a가 1감소된 후 4가 출력
	//a-- 예) printf("%d", a--) -> 5를 출력한 후 1감소되어 4가 됨
	

	int a = 10;
	
	printf("%d\n", a++); //후위 증가 10
	printf("%d\n", ++a); //전위 증가 12
	printf("%d\n", a--); //후위 증가 12
	printf("%d\n", --a); //전위 증가 10
	

	return 0;
}