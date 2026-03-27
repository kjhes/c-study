#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a,b,c,d,e,f,g,h,i,j;
	printf("10개의 숫자를 입력하세요");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &f);
	scanf("%d", &g);
	scanf("%d", &h);
	scanf("%d", &i);
	scanf("%d", &j);
	printf("%d\n", a + b + c+d+e+f+g+h+i+j);
	printf("%f\n", (a + b + c+d+e+f+g+h+i+j) / 10.0);
	


	return 0;
}
