#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	//int i, cnt = 0;
	//for (i = 1;i < 100;i++) {
	//	if (i % 3 == 0 && i % 7 == 0) //3의 배수와 7의 배수를 둘다 만족해야함
	//	{
	//		printf("%d*", i); //즉 21의 배수가 출력됨
	//	}
	//}

	int i;
	for (i = 0;i < 10;i++) { //i가 9일때까지 반복
		if (i % 3 == 0)continue; //i가 3의 배수이면 아래 실행하지 않고 위로감 3,6,9
		if (i > 5) break; //i가 5보다 크면 탈출 

		printf("%d", i);
	}

	//int i;
	//for (i = 0;i < 5;i++) {
	//	if (i == 3) break;
	//	printf("%d", i);
	//}
	return 0;
}

