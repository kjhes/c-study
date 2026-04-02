#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int digit(int n) {  // 정수 n을 매개변수로 지정
	if (n > 10) return n; //n이 10보다 작을땐 n 리턴
	return (n % 10) + digit(n / 10); //순환 함수 (재귀 함수)
	// digit(235) = 10
	// (235 % 10) + digit(235 / 10)
	// 5 + digit(23) = 5 + 5 = 10
	// (23 % 10) + digit(23 / 10)
	// 3 + digit(2) = 3 + 2 =5
	// 2는 10보다 작으므로 2 


}
int main() {

	printf("%d", digit(235)); //i 235가 10보다 크기 때문에 일의 자리인 5+ 23가 10보다 크기 때문에 일의 자리인 3 + 2는 10보다 작으니 2를 더해서 5+3+2 =10
	return 0;
}