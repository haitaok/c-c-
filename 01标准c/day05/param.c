#include <stdio.h>
#include "clear.h"

int get(int a,int b){
	printf("a=%d,b=%d\n",a,b);
	int n;
	do{
		printf("请输入%d到%d的一个整数：",a,b);
		if(scanf("%d",&n)!=1){
			clear();
		}
	}while(n<a||n>b);
	return n;
}

int main(){
	int n=get(1,100);
	int m=get(10,50);
	printf("n=%d,m=%d\n",n,m);
	return 0;
}
