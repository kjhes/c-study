#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Count_even(int array[]);
void Print_Count(int cnt);
int main() {
	int ar[10];
	int cnt =0 ;
	printf("정수 10개 입력: ");
	for (int i=0;i <= 9;i++)
		scanf("%d", &ar[i]); //ar[i] 처럼 쓰면 배열이 아니라 값을 말하는 것 이기 때문에 주소를 넣어줘야 한다.
		cnt = Count_even(ar); // ar전체를 호출 할때는 &를 쓰지않는다. 배열이름 자체가 주소이기 떄문에
		Print_Count(cnt);
		printf("%d", ar[5]);
	return 0;
}
int Count_even(int array[]) { //배열은 주소를 준다 값이 아니라 (배열이 너무 커질 수도 있어서)
	int cnt = 0;
	for (int i = 0;i <= 9;i++) {
		if (array[i] % 2 == 0 && array[i] != 0)
			cnt++;

	}
	array[5] = 100;
	return cnt;	//cnt가 반환됨(짝수의 개수)
}
//함수정의
void Print_Count(int cnt) {
	printf("%d", cnt);
}