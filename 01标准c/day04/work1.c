#include <stdio.h>

int main(){
	int n=0;
	int numb = 0;
	int a[10]={0};
	while(n<10){
		printf("请输入%d个整数：",n+1);
		scanf("%d",&numb);
		scanf("%*[^\n]");
		scanf("%*c");
		a[n]=numb;
		n++;
	}
	int i=0;
	for(i=0;i<10/2;i++){
		int temp=a[i];
		a[i]=a[10-i-1];
		a[10-i-1]=temp;
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
