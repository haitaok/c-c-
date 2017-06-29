#include <stdio.h>

int main(){
	int x=123;
	int a[5]={11,22,33,44,55};
	int y=456;
	int i;
	for(i=-2;i<8;i++){//越届访问数据可能访问到无法预知的数据
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("x=%d,y=%d\n",x,y);
	printf("&x=%p,a=%p,&y=%p\n,&i=%p\n",&x,&a,&y,&i);
	for(i=-1;i<8;i++){//越界存放数据可能会破坏其他变量的值
		a[i]=0;
	}
	printf("x=%d,y=%d\n",x,y);
	for(i=-3;i<9;i++){//越届存放数据甚至可能导致程序崩溃
		a[i]=0;
	}
	return 0;
}
