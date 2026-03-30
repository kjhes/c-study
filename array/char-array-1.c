#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//char-array-1.c
// 문자열 ppt -> 5번 7번 9번 슬라이드
// 문자열의 길이를 구하는 프로그램

int main (){
	char str[30] = "C language"; //문자열 배열 30자 
	int i = 0; //0 부터 시작

	while (str[i] != '\0') // 만쪽할때 반복
		i++;			   // != 다르다 \0는 null 값을 의미
						   // 문자열 내용 끝나는 시점 반드시 null 이들어감
	printf("문자열의 길이는 %d입니다", i);







	return 0;
}