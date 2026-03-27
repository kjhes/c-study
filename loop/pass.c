#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int pass = 1234; //비밀번호
	int pw = 0; //사용자 입력

	while (pass != pw) { //반복문 while 은 ()안에 식이 참일때 1일때 반복
		printf("암호를 입력하세요:\n");
		scanf("%d", &pw);
		if (pw != pass)
			printf("틀렸습니다.\n");

	}
	printf("성공~");

	return 0;
}