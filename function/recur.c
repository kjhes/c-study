//함수의 순환 호출(재귀 함수)
//함수는 자기 자신을 호출할 수도 있다 . 이것을 순환(Recursion) 라고 부른다
//(스스로를 호출) 재귀 호출이란 함수 내부에서 함수가 자기 자신을 호출하는 행위
//함수 내에서 반복(재귀)를 중단 할 수 있는 명령어가 필요함



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(int);
int main() {
	int a;
	printf("숫자를 입력하세요 :");
	scanf("%d", &a);
	printf("%d ", func(a)); //인수
	//a를 인수로 보내고 func함수가 리턴한 결과를 출력
}
int func(int a) { //매개 변수
	if (a <= 1) return 1; // a가 1보다 작거나 같아질 때까지 순환 반복
	return a * func(a - 1);
	// 순환적으로 호출하다가 결과를 반환 
}
//a =5  ,a<=1 X -> a*func(a-1), 4<=1 X -> 4*func(4-1) , 3<= 1 X -> 3*func(2), 2<=1 X 2* func(1) , 1<= O
// 즉 최종값은 5*4*3*2*1 = 120이 된다