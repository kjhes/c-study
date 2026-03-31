#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //scanf , printf 입출력에 관련된 헤더파일
#include <string.h> //전처리기 <헤더파일> (프로그램 컴파일 하기 전에 링크 역할을 함)
//문지열 함수를 사용하기 위해 불러옴
int main() {
	char a[10] = "HELLO";// 10바이트 공간에 실질적으로 9개의 글자를 넣을 수 있다 (널이 한칸 차지하기 때문에_)
	//문자열 배열에 초기값을 한번에 넣어주면 널 값이 알아서 들어간다
	printf("%c", a[0]);
	printf("%s", a);

	char b[10]; // 초기값 없이
	//b[0] = 'L'; // 인덱스로 문자를 넣어 주면 null이 어디에 들어갈 지 b가 알 수 없어서 쓰레기값이 나온다.
	//b[1] = 'O';
	//b[2] = 'V';
	//b[3] = 'E';
	//b = "love"; //이 방법은 안된다 선언후 한번에 지정 불가능
	//그래서 필요한게 strcpy()
	strcpy(b, "love");
	printf("%s", b);



	return 0;
}