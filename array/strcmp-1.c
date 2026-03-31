#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
int main() {
	int res;
	char a[30];
	char b[30];
	
	printf("문자열1을 입력하세요");
	scanf("%s", a); //&a[3]
	printf("문자열2를 입력하세요");
	scanf("%s", b);
	res =strcmp(a, b); //문자열 비교
	//res 0, 음수 , 양수
	if (res == 0) //반환값이 0이면 완전히 같은 문자열 이다
		printf("0입니다");
	else if (res > 0) // 양수이면 문자열1이 문자열2보다 사전순으로 뒤에 있음
		printf("%s가 %s보다 뒤",a,b);
	else if (res < 0) // 음수이면 문자열1이 문자열2보다 사저눈으로 앞에 있음
		printf("%s가 %s보다 앞",a,b);

	printf("%s , %s ", a, b);

	return 0;
}