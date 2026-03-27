#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//1~10까지의 홀수의 합을 while한번 for문으로 한번 구하기
	//while
	int st = 0, sum = 0;
	/*while (st <= 10) {
		if (st % 2 == 1)
			sum += st;
		st++;
	}*/

	for (st = 1; st <= 9; st+=2) 
		sum += st;

	



	printf("i는 %d, 합은 %d\n",st, sum);

	return 0;
}