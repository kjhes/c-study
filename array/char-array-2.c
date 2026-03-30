#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
//과일 이름 3개 이며 각 과일이름은
//최대 20자이다 for 반복문으로 과일 이름을 받아 출력하시요.
int main(void)
{
    int i=0,j=0;
    char fruit[3][20];

    
    for (i = 0; i < 3; i++) {
        j = 0;
        printf("좋아하는 과일을 입력하세요");
        scanf("%s", fruit[i]);
        //while (fruit[i][j] != '\0') { // 왜 안될까
        //    j++;
        //}
        //printf("%d 번째 과일 이름은: %s 몇글자입니다", i, j); //과일 글자 수 도 같이 출력하고 싶었는데
        printf("%d 번째 과일은 %s입니다", i, fruit[i]);

    }
    return 0;
}