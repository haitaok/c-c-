#include <stdio.h>

int main(){
	int max=0xffffffff;
	int min=0x2e31-1;
	int n=0;
	int cint = 0;
	int num=0;
	printf("您要收入几个整数:");
	scanf("%d",&num);
	do{
		
		printf("请输入一个整数，-1结束:");
		cint=scanf("%d",&n);
		scanf("%*[^\n]%*c");
		if(cint==1){
			if(max<=n){
				max=n;
			}
			if(min>=n){
				min=n;
			}		
		}
		
	}while(cint!=1||--num!=0);	
	printf("最大值%d,最小值:%d\n",max,min);
	return 0;
}
