#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//int sum = 0,i, num = 0;
	//printf("숫자를 입력하세요");
	//scanf("%d", &num);
	//for (i = 1; i <= num;i++)
	//	sum +=i;

	////printf("%d", sum);
	//int mul,i;  
	//printf("원하는 단은?"); 
	//scanf("%d",&mul); //곱샘을 하기 위해선 두가지 숫자가 필요한데 그중 하나인 단을 정수로 받는다
	//for (i = 1; i <= 9; i++) //for 문은 인자를 3개 받는데 순서대로 변수명,조건,증가량이다
	//	//전에 말했듯 곱셈을 하기 위한 두번 째 숫자를 구하기 위해 변수 i를 만들고 1씩 증가시켜
	//	//i가 1에서 9가 되도록 9번 반복시킨다
	//	printf("%d * %d = %d\n",mul,i,mul * i);
	//	//i가 1씩 증가하기 때문에 증가 할때 마다 곱셈을 해서 출력한다

	for (int i = 1;i <= 9;i++) {
		printf("%d,단입니다", i);
		//i는 j가 9번 돌고 나서 한번 증가
		for (int j = 1; j <= 9; j++)
			printf("%d*%d=%3d\n", i, j, i * j);
		//%3d는 자리수 오른쪽 부터 정렬 됨
		//%-3d는 왼쪽부터 정렬 됨
		//원래는 오른쪽 정렬 -를 붙이면 왼쪽 정렬
	}//i끝
		return 0;
}