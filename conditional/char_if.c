#include <stdio.h>
int main(void) {
	char ch;
	printf("문자를 입력하세요");
	//scanf("%c",ch);
	ch = getchar();
	//getstring()도 있음
	if ('a' <= ch && 'z' >= ch) //97~122
		printf("소문자");
	else if ('A' <= ch && 'Z' >= ch) //65~90
		printf("대문자");
	//문자 하나는 컴퓨터 에서 아스크 코드로 인식함
	//특정 글자를 특정 숫자로 인식함 그래서 ""를 쓰지 않고 ''를 쓰는 이유이기도 함.
	else if ('0' <= ch && ch <= '9') //48~57
		printf("숫자입니다");
	else
		printf("그 외 문자인듯");






	return 0;
}