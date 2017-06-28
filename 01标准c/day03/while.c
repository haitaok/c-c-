#include <stdio.h>

int main(){
	double money =100;
	printf("你从家里拿了多少钱");
	scanf("%lf",&money);
	printf("来到游戏厅......\n");
	while(money>0){
		puts("换10元游戏币");
		money -=10;
		puts("玩游戏￥%#......&......%.....&$币用完");
	}
	puts("钱不够了，回家楼\n");
	return 0;
}
