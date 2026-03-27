#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f3();
void f2() {
	int b[2][3];
	int totalsize = sizeof(b); //3행 2열 배열의 바이트 크기 int기 때문에 4*3*2 =24Byte
	printf("%d\n", totalsize);
	int bsize = sizeof(b[0]); //배열 b의 첫번째 행의 바이트 크기 0 3개가 들어가있기 떄문에 4*3*1 =12Byte
	printf("%d\n", bsize);
	printf("%d\n", sizeof(b[0][0])); //b의 첫번째 행의 첫번째 열의 바이트 크기 0 하나가 있기에 4*1 =4Byte
	printf("%d\n", sizeof(b) /sizeof(b[0])); //24 나누기 12 =2 //몇 행인지가 나옴
	printf("%d\n", sizeof(b[0]) / sizeof(b[0][0])); // 12 나누기 4 =3 // 몇 열인지가 나옴
	printf("=========================\n");
}
void f1() { //함수 f1을 만들었음 //호출해야지 실행되는 함수
	int a[2][3]= { {4,5,6},{7,8,9} };//배열 이름 [배열의 개수] [ 각 배열의 저장공간의 개수]
	/*a[0][0] = 4; 
	a[0][1] = 5;
	a[0][2] = 6;
	a[1][0] = 7;
	a[1][1] = 8;
	a[1][2] = 9;*/
	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);
	printf("=========================\n");
	return 0;
}
void arrPrint(int k[2][3]) { //k를 매개변수 인수와 유형 , 개수 동일
	for (int i = 0;i <= 1;i++) {
		for (int j = 0; j <= 2;j++) {
			printf("%2d", k[i][j]);
		}
	}
}
void f3() { // 오류 날걸 알지만 맨 밑에서 만듦 
	int a[2][3] = { {1,2,3},{4,5,6} }; //a[0][0]= 1[0][1]=2 [0][2]=3 [1][0]=4 [1][1]=5 [1][2]=6
	arrPrint(a);  //인수 보내면서 함수 호출 , a배열을 arrPrint 함수를 호출할때 같이 보냄 
	int b[2][3] = { {1},{4} }; //1 0 0 4 0 0
	arrPrint(b);
	int c[2][3] = { {1,2} }; //1 2 0 0 0 0
	arrPrint(c);
	int d[2][3] = { 1,2,3,4,5,6 }; // 1 2 3 4 5 6
	arrPrint(d);
	int e[2][3] = { 1,2,3,4 }; // 1 2 3 4 0 0
	arrPrint(e);
	int f[2][3] = { 1,2 }; // 1 2 0 0 0 0 
	arrPrint(f);
	int g[2][3] = { 0 }; // 0 0 0 0 0 0 
	arrPrint(g);


}
int main() { //프로그램을 실행 시키면 os가 프로그램을 실행 시키고 프로그램 시작 코드가 main함수를 호출해서 main부터 시작하는 것 처럼 보이는 것 이ㅏㄷ
	f1();
	f2();
	f3();
	return 0;
}

