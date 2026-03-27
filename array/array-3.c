#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} }; //a[][]에서 앞에 []이 행이고 뒤에 []열이다
	//사실 그냥 데이터 인덱스 개수일 뿐이다.
	int i, j;
	for (i = 0;i < 3;i++) { //i는 행 의미 0~2 사실 그냥 폴더 개념이 더 편한듯
		for (j = 0;j < 3;j++) //j는 열 의미 0~2 
			printf("%d\t", a[i][j]);
		printf("\n");

	}







	return 0;
}