#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//중복 for 문 : 밖의 for 문이 한번 반복 할때 안쪽 for 는 다 돌아야 한다
	for (int i = 1;i <= 12;i += 3) { //12단 까지 반복 시키는 건데 한줄에 3개씩 쓰기 위해 i+=3을 사용했다
		if (i==10) //10 11 12단은 글자수가 많아지기 때문에 조건문으로 따로 설정한다
			printf("%5d단\t\t%5d단\t\t%5d단\n", i, i + 1, i + 2); //숫자가 두 글자여서 d앞에 5를 썼다
		else
			printf("%4d단\t\t%4d단\t\t%4d단\n", i, i + 1, i + 2); //i가 1일때 2단 3단을 한번ㅇ ㅔ쓰는 방법이다
		for (int j = 1;j <= 9;j++) { //여기서도 한줄에 3단씩 써야 하기 때문에 +1과 +2를 사용했다
			printf("%d X %d =%2d\t", i, j, i * j); //t는 간격을 벌리기 위해
			printf("%d X %d =%2d\t", i+1, j, i+1 * j);
			printf("%d X %d =%2d\n", i+2, j, i+2 * j);
			             



		}




	}




	return 0;
}





