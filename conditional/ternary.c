#include <stdio.h>
int main(void) {
	//삼항 연산자
	//if else를 간단하게 표현 하는식 조건이 참이면 ?뒤에를 실행 아니면 ;뒤에를 실행하는 코드
	//조건 ? a: b

	int num;
	scanf_s("%d", &num);
	num % 2==0 ? printf("짝수") : printf("홀수");

}
// 한 솔루션에 여러 파일을 넣으니 main이 중첩되서 실행이 안됨 그러니 속성 -> 빌드에서 제외 (실행 x)를 시켜버린다
//주석 넣는 법 1,// 2,드래그 후 ctrl k crtl c  
//주석 취소 ctrl k ctrl u
