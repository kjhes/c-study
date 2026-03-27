#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num; //몇단
	int i=1; //반복 회수 
	printf("몇단을 할까?");
	scanf("%d", &num);
	while (i <= 9) {
		printf("%d", i * num);
		i++;
	}




	return 0;
}