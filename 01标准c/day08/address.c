#include <stdio.h>

int main(){
	int a[5]={11,22,33,44,55};
	int* q=NULL;//空指针
	int* p;//野指针， 要尽量避免，用空指针代替
	printf("p=%p\n",p);
	
	printf("q=%p,q=%d\n",q,q);
	#define T int *
	union {
		T x;
		char b[sizeof(T)];
	}u;
	u.x=q;
	int i;
	for(i=0;i<sizeof(T);i++){
		printf("%d ",u.b[i]);
	}
	printf("\n");
	//*p=100;//肯呢个导致非法内存访问
	p=a;//数组当作数据用时表示第一个元素的地址
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",*(a+i));
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",p[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",*(p+i));
	}
	printf("\n");
	printf("%d\n",(p+2)[1]);//*((p+2)+1)
	q=p+3;
	printf("%d\n",1[q]);
	printf("p=%p,q=%p,q-p=%d\n",p,q,q-p);
	for(i=0;i<5;i++){
		printf("%d ",*p+i);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",*p++);
	}
	printf("\n");
	for(i=-5;i<0;i++){
		printf("%d ",p[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ",*--p);
	}
	printf("\n");
	return 0;
}
