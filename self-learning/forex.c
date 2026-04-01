#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int a[5] = {9,1,7,3,5};
	int i, j, min, t;
	for (i = 0;i < 4;i++) { //0,1,2,3 
		min =i; //0,1,2,3
		for (j = i + 1; j < 5;j++) { //j = {1, 2, 3, 4},{2,3,4},{3,4},{4}
			if (a[j] < a[min]) //가장 작은 값 찾는 반복 
				min = j; //가장 작은 값을 min으로 지정
		}
		t = a[i];
		a[i] = a[min];
		a[min] = t;	
		//범위 내에서 가장 작은 값을 i범위 맨 앞으로
	}
	for (i = 0; i < 5; i++)
		printf("%2d", a[i]);
	//차레대로 프린트 (작은 순으로 정렬)
	return 0;
}
