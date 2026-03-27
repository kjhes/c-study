#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	for (int i = 1;i <= 10;i++) {
		

	//7의 배수를 만나면 반복문 강제 탈출
		if (i % 7 == 0 && i != 0)
			//break;
			continue; //반복문 안에서 continue 밑에 실행을 생략하고 다시 반복문으로 돌아간다
		printf("%d", i); //continue에 의해 7이 됐을때 printf문이 생략되어 넘어간다
	}

	return 0;
}