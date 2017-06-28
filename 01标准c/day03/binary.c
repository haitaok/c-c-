#include <stdio.h>

int main(){
	int n=0;
	int cnit=0;
	do{
		printf("请输入一个整数:");
		cnit = scanf("%d",&n);
		scanf("%*[^\n]%*c");
	}while(cnit!=1);
	int i=0;
	unsigned int base=0x80000000;	
	for(i=0;i<sizeof(int)*8;i++){
		int a = base&n;
		if(a==0){
			printf("%d",0);
		}else{
			printf("%d",1);
		}
		base=base>>1;
	}
	printf("\n");
	return 0;
}
