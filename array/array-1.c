#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i=0;
	int num_array[5] = { 10,20,30,40,50 };
	int num_array2[] = { 10,20,30 };//3개의 값으로 되어 있음 []안에 배열길이 3이 생략되어 있음.
	printf("%d\n", num_array[2]); //30이 출력 왜냐 프로그래밍에서는 수가 0부터 시작

	int num_array3[5] = { 1,2 };//공간이 5개이지만 실제 들어가있는 초기값은 2개 밖에 없다
	//나머지 공간은 0으로 차서 {1,2,0,0,0}이 된다.
	int num_array4[5] = { 4 }; //{4,0,0,0,0}이 된다
	int num_array5[5] = { 0 }; //{0,0,0,0,0}이 된다

	int num_array6[5]; //초기값을 넣지 않았음
	num_array6[0] = 100;
	num_array6[1] = 200;
	num_array6[2] = 300;
	num_array6[3] = 400;
	num_array6[4] = 500;

	//for (int i = 0;i <= 4;i++)
	//	printf("%d\t", num_array6[i]);
	while (1) {
		printf("%d\t", num_array6[i]);
		i++;
	}
	return 0;
}
