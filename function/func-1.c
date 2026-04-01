#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int a, int b);
int Input(void);
void Result_Print(int val);
void Intro(void);

int main() {
	int a, b, result;
	Intro(); // intro 함수 호출 ()안에 인수가 없으니 
	//함수 앞에 형이 없음 , 반환되는 것이 없음.
	a = Input();
	b = Input();
	result = Add(a, b);
	Result_Print(result);
	return 0;
}
void Intro(void) { //제목 출력 함수
	printf("****** START ****** \n");
	printf("두 개의 정수 입력: \n");

}
int Input(void) { // 정수 입력 함수
	int input; //int 는 반환되는 값의 형 의미
	scanf("%d", &input);
	return input;
}
int Add(int i, int j) {
	return i + j;
	//int Add(int i , int j) -> int 반환
}
void Result_Print(int val) {
	printf("덧셈에 대한 결과 : %d \n , val");
	printf("****** END ******");
	//반환되는 값이 없어 void
}


