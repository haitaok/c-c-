#include <stdio.h>

int main(){
	int score;
	int n=0;
	do{	
		printf("第%d考试......完毕，输入成绩:",++n);
		if(scanf("%d",&score)==1){
			printf("成绩是%d\n",score);
		}else{
			printf("输入无效\n");
		}
		scanf("%*[^\n]%*c");//清除输入缓冲区剩余字符
	}while(score<60);
	printf("恭喜你通过考试!\n");
	return 0;
}
