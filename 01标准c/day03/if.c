#include <stdio.h>

int main(){
	int age;
	printf("请输入年龄:");
	scanf("%d",&age);
	if(age<0||age>1000){
		printf("这不可能是人类\n");
		if(age<0){
			printf("欢迎你，来自未来的朋友！\n");
		}
	}
	else if(age<16){
		printf("小不点不要捣乱");
	}else if(age>=100){
		printf("您是一位老寿星\n");
	}
	else{
		printf("欢迎光临!\n");
	}	
	return 0;
	
}
