#include <stdio.h>

int main(){
	int a[10];//定义时方括号中是元素个数,非负整数字面量
	int i=0;
	for(i=0;i<10;i++){
		printf("%d ",a[i]);//使用时方括号中是下标（0～元素个数-1）
	}
	printf("\n");
	int num[4]={30,16,22,18};//数组的初始化，数据不能多可以少，少的部分去不用数值0填充	
	for(i=0;i<4;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	int b[5]={11};
	for(i=0;i<5;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	char c[10]={'c','s','d','1','0','0','7'};
	for(i=0;i<10;i++){
		printf("[%c]%d",c[i],c[i]);
	}
	printf("\n");
	a[0]=123;
	a[1]=10,a[2]=20,a[3]=30,a[4]=40;
	printf("请输入5个整数：");	
	for(i=5;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		printf("%d,",a[i]);
	}
	printf("\n");
	return 0;
}
