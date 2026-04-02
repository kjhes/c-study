#include <stdio.h>
int fun1();
int fun2();

//함수들을 여러개 호출했을 때 
//함수들의 작동순서를 쓴 프로그램

int main(void) {
	printf("메인 시작\n"); //1
	fun1(); //2
	printf("메인 끝\n"); //10
	return 0; //11

}
int fun1() { //2
	printf("fun1함수 시작 \n"); //3
	fun2(); //4
	printf("fun1함수 끝\n"); //8
	return 0; //9

}
int fun2() { //4
	printf("fun2함수 시작"); //5
	printf("fun2함수 끝\n"); //6
	return 0; //7

}





