#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int price = 0, money = 0,charge =0 ,c5000=0,c1000=0,c100=0;
	printf("물건값은?");
	scanf("%d", &price);
	printf("투입금액은?");
	scanf("%d", &money);
	if (money - price >= 0)
		charge = money - price;
	else
		printf("돈이 부족해");

		if (charge >= 5000) {
			c5000 = charge / 5000;
			charge -= c5000*5000;
		}
		if (charge >= 1000) {
			c1000 = charge / 1000;
			charge -= c1000*1000;
		}
		if (charge >= 100) {
			c100 = charge / 100;
			charge -= c100*100;
		}
		
	printf("5000원:%d,1000원:%d,100원:%d,총합:%d", c5000, c1000, c100, money - price);
	return 0;
}




