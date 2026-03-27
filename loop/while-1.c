#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//1~5 출력
	int i = 1,sum=0,sum2=0;
	while(i<=100){ //i<6	
		printf("%d\n", i);
		sum = sum + i; // sum+=i
		if (i % 2 == 0)
			sum2 = sum2 + i;
		i = i + 1; // i+=1 ,i++ 어차피 1씩 증가하기 때문
		
	}
	printf("%d\n", sum);
	printf("%d\n", sum2);

	return 0;
}