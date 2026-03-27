#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//for (int j = 1;j <= 5;j++) {
	//	printf("\n*");
	//	for (int i = 1;i <= 5;i++) {
	//		printf("*");
	//	}
	//}
	//for (int j = 1;j <= 5;j++) {
	//	printf("\n");
	//	if (j == 1 || j == 5)
	//		for (int i = 1;i <= 5;i++) {
	//			printf("*");
	//		}
	//	else
	//		printf("*   *");
	//}
	for (int j = 5;j >= 1;j--){
		printf("\n");
		for (int i = 1;i <= j;i++) {

				printf("*");
		}
	}







	return 0;
}
