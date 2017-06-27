#include <stdio.h>

int main(){
	int a;
	int b;
	int* c = &a;
	printf("&a=%p,&b=%p,%d,%lx\n",&a,&b,sizeof(&a),c);
	(*&a)=100;
	(*&b)=888888;
	printf("a=%d,b=%d\n",a,b);
	//逗号运算符 以最有一项为计算结果
	printf("%d\n",(a=123,b=a+45));
	printf("%d\n",(b,a));
	return 0;
}
