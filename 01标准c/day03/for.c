#include <stdio.h>

int main(){
	int score;
	int sum=0;
	int i;
	for(i=0;i<10;i++){
		printf("请输入第%d个成绩：",i+1);
		if(scanf("%d",&score)!=1){
			printf("输入无效！\n");
			scanf("%*[^\n]%*c");
			i--;
			continue;//跳过循环体中剩余的内容
		}
		if(score<0||score>100){
			break;//跳出循环
		}
		sum+=score;
	}
	printf("平均成绩:%f\n",(double)sum/i);//nan not a number
	goto aaa;
	printf("你看不到我\n");
bbb:
	printf("回归\n");
	return 0;
aaa:
	printf("娃哈哈\n");
	goto bbb;
}
