#define _CRT_SECURE_NO_WARNINGs
#include <stdio.h>
void call_value(int icopy);
void call_refer(int *ip);
int main() {
	int i = 777;
	call_value(i); //함수 호출 인수 -> 777 ,값에 의한 호출
	printf("값 호출 : %d\n", i); //888이 나올 것 같지만 icopy는 i랑 같은게 아니라 복사본 일 뿐이여서 777이 나온다.

	call_refer(&i); //함수 호출, 인수 -> i의 주소,참조(주소)에 의한 호출
	printf("참조 호출 : %d\n", i);
	return 0;
}
void call_value(int icopy) { //복사한 값만 전달 i != 777
	icopy = 888; //icopy에 888넣음 
}
void call_refer(int* ip) { //주소를 받기 때문에 일반 변수가 아닌 포인터 변수로 받아야 함.
	*ip = 888; //포인터 변수의 값을 나타냄
}

