#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand((unsigned)time(NULL));
	int answer = rand() % 100; //100으로 나눈 나머지를 이용해서 0부터 99까지만 나오게 함
	printf("%d\n", answer); 
	int guess;
	int try1 = 0;

	//반복 구조
	do { //do while 은 일단 실행하고 조건을 체크함 즉 일단 한번은 무조건 실행ㄴ
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		try1++;
		if (guess > answer)
			printf("high\n");
		else if (guess < answer)
			printf("low\n");
	} while (guess != answer);
	printf("축하 , 총 %d번 시도", try1);




	



	return 0;
}