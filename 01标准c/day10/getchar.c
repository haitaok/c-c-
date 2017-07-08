#include <stdio.h>

int main(){
	int i;
	int d;
	for(i=0;i<3;i++){
		//printf("请输入一个整数:");
		//scanf("%d",&d);
		//scanf("%*[^\n]");scanf("%*c");
		//printf("请输入的是%d\n",d);
		d = getchar();//换行符读走了
		if(d==EOF){
			printf("读取终止\n");
			break;
		}
		putchar(d);
		printf("%c(%d)",d,d);
	}
	return 0;
}
