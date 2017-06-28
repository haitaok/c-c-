#include <stdio.h>

int main(){
	int n=0;
	do{
		printf("请输入1-9的整数:");
		if(scanf("%d",&n)==1){
			if(n<=0||n>9){
				printf("请收入1-9的整数！\n");
				continue;	
			}else{
				break;
			}
		}else{
			scanf("%*[^\n]%*c");
			printf("收入有错误，请重新收入\n");
			
		}

	}while(1);
	int i=0;
	int j=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
