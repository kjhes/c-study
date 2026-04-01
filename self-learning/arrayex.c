#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int su[3][2] = { 33 ,22 ,44 ,66 ,77 ,100 };
	int sum = 0;
	for (int i = 0;i < 3; i++){
		for (int j = 0; j < 2; j++) {
			sum += su[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}