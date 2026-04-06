#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Add(int a, int b);
void Sub(int a, int b);
void Arr_Prn(int arr[]);
int main() {
	int a = 10;
	int b = 20;
	int c[5] = { 1,2,3,4,5 }; // 배열
	printf("%d", Add(a, b));
	Sub(a, b);
	Arr_Prn(c); // c[]가 아닌 c를 써야하는 이유 없음 둘다 됨 c라는 이름 자체가 주소를 의미해서

	return 0;
}
int Add(int a, int b) {	
	int k = a + b;
	return k;	
}
void Sub(int a, int b) {
	int s = a - b;
	printf("%d",s);

}
void Arr_Prn(int arr[]) {
	for (int i = 0;i <= 4;i++)
		printf("%d",arr[i]);

}