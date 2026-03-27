#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, cnt = 0, i;
	printf("원하는 배수 입력:");
	scanf("%d", &i); // 몇 배수로 할래?
	printf("배수의 개수 입력:");
	scanf("%d", &num); //배수 몇개를 보여줄까?
	
	

	while (cnt++ < num) //cnt == num일때 까지 반복 하지만 마지막은 while 조건만 실행하고 조건이 틀리니 밑에 print 실행 X
		printf("%d", i * cnt);


	return 0;

}