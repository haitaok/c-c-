#include <stdio.h>

int main(){
	int a[5]={11,22,33,44,55};
	printf("a=%p\n",a);
	int i;
	for(i=0;i<5;i++){
		printf("&a[%d]=%p\n",i,&a[i]);
	}
	*a+=100;
	printf("%d\n",a[0]);
	for(i=0;i<5;i++){
		printf("a+%d=%p\n",i,a+i);
	}
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d,%d ",*(a+i),*(i+a));
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",i[a]);
	}
	printf("\n");
	return 0;
}
