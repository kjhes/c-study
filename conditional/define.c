#include <stdio.h>
#define TAX_RATE 0.2 //기호상수 선언
//전처리 단계에서 처리(자료형이 없음),전 범위
int main(void) {
	const int MONTHS = 12; //기호 상수 선언
	//컴파일러 단계에서 처리 블록안에서만 유효
	int m_salary, y_salary; //변수 선언

	printf("월급을 입력하시요:");
	scanf_s("%d", &m_salary);

	y_salary = MONTHS * m_salary; //순수입 계산
	printf("연봉은 %d입니다.\n", y_salary);
	printf("세금은 %f입니다.\n", y_salary * TAX_RATE);





	return 0;
}