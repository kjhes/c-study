#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
//이차원 배열
int main(void)
{
    int i;
    char menu[3][10] = { //5행0~4(세로) 10열0~9(가로)
        "init", //1 행 초기값 설정
        "open", //
        "close",
        /*"read",
        "write"*/
    };


    for (i = 0; i < 3; i++)
        printf("%d 번째 메뉴: %s \n", i, menu[i]); // 인덱스를 다 안쓰고 하나만 쓰면 맨 앞 인덱스만 적용 행만 쓰고 열을 생략함

    return 0;
}