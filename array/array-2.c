#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//기호상수 5 -> STUDENTS 상수는 변하지 않는 수 5에 별명을 붙인게 기호 상수
#define STUDENTS 5 //const int STUDENTS = 5;
int main() {
	int sum = 0, average = 1;
	int score[STUDENTS];//5개 배열 만듦
	for (int i=0;i <= 4;) {
		scanf("%d", &score[i]);
		if (score[i] == 0) {
			average -= 1;
			i++;
		}
		else if(score[i]>100) {
			continue;
		}

		else {
			sum += score[i];
			average++;
			i++;
		}
	}	

	printf("sum:%d , average:%f", sum, (float)sum / average);

	return 0;
}