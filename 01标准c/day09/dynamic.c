#include <stdio.h>
#include <stdlib.h>

int main(){
	int b=sizeof(double);
	double* p =(double*)malloc(b);
	int cnt;
	printf("请输入元素的个数:");
	scanf("%d",&cnt);
	int* a = calloc(5,sizeof(int));
	printf("p=%p,a=%p\n",p,a);
	*p=123.45;
	int i;
	for(i=0;i<5;i++){
		a[i]=i+10;
	}
	printf("%g\n",*p);
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	free(p);
	a=realloc(a,sizeof(int)*10);//释放调旧空间 分配新空间
	if(a==NULL){
		printf("申请空间失败\n");
		return 1;
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	a=realloc(a,0);
	printf("a=%p\n",a);
	return 0;
}
