#include <stdio.h>

//stdio.h - scanf와 printf 를 가져오기 위해서
int main() {
	//void는 아무 매개변수를 받지 않는다는 말로 안써도 상관은 없다
	// int main()은 정수를 결과값으로 가지는 함수라는 뜻이다
	// c언어 자체에서 프로그렘이 시작될떄 main 함수를 실행한다
	// 즉 main(10)처럼 호출 할 수 있기때문에 비워두면 아직 매개변수를 정의하지 않았다고 생각하기때문에
	// 그냥 void를 넣어서 main(10)처럼 호출 못 하게 만드는 것 이다.
	int num1, num2, res1;
	double divide;
	char op;
	char yesno[10];

	while (1) {
		printf("res1:?\n");
		scanf_s("%d", &num1);
		printf("res2:?\n");
		scanf_s("%d", &num2);

		printf("calculate:?(+,-,*,/)");
		scanf_s(" %c", &op);
		switch (op) {
		case '+':
			res1 = num1 + num2;
			//printf("%d", sum);
			break;
		case '-':
			res1 = num1 - num2;
			//printf("%d", sub);
			break;
		case '*':
			res1 = num1 * num2;
			//printf("%d", mul);
			break;
		case '/':
			divide = (double)num1 / num2;
			//printf("%.5f", divide);
			break;

		}




		if (op == '+' || op == '*' || op == '-')
			//|| or 이라는 뜻 이다.
			printf("%d\n", res1);
		else
			printf("%0.5f\n", divide);


		printf("끝낼까?(YES or NO)\n");
		scanf_s("%s", yesno, sizeof(yesno));
		//왜 sizeof(yesno)를 썼는가?
		//char [10] 과 같이 문자열 메모리 크기를 정했다 생각하지만 사실은 배열크기를 정한것 뿐이고 이것은 scanf가 알지못하는 정보
		//그러니 sizeof 함수를 이용해 메모리 정보를 scanf 에도 주어야 한다.

		if (strcmp(yesno, "YES") == 0 || strcmp(yesno, "yes") == 0 || strcmp(yesno, "y") == 0 || strcmp(yesno, "Y") == 0)
			break;
		//근데 break가 조건문을 탈출 하고 while문을 탈출 안 할 수도 있는거 아닌가?
		//아님 가까운 반복문을 탈출함

		//이 코드가 작동을 안 하는 이유 c 언어의 핵심 원리 때문
		//char yesno[10]; 이란 선언은  내부적으로 yesno=[][][][][][][][][][][]
		//scanf로 입력하면 yesno = [Y]E][S][\0][][][][][][] \0는 문자열 끝 표시
		//근데 비교군 "YES"도 메모리 어딘가에 [Y][E][S][\0]로 저장되 있는 메모리의 주소를 말한다
		//즉 문자열을 비교하는게 아니라 주소를 비교하는 것 이여서 아예 성립하지 않는다 또 char [4]로 똑같이 하더라도 이 사실은 변하지 않는다
		//그래서 사용하는것이 strcmp 이 함수는 한 문자열의 아스키 코드를 분석해 비교하고 \0위치까지 비교해 같은 문자열인지 확인한다.


	}




	return 0;
}