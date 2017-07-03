#include <stdio.h>

void f1(int* p,int* q){
	int* t=p;p=q;q=t; 
}
void f2(int*p,int* q){
	int t = *p;*p=*q;*q=t;
}

void f3(int a,int b){
	int t=a;a=b;b=t;
}


int main(){
	int a=10,b=20;
	int x,y[5],*p=&a,*q=&b;
	int t=*p;*p=*q;*q=t;
	printf("a=%d,b=%d\n",a,b);
	int m=10,n=20;
	int* u=&m,*v=&n;
	int* w=u;u=v;v=w;
	printf("m=%d,n=%d\n",m,n);
	f1(&m,&n);
	printf("m=%d,n=%d\n",m,n);
	f2(&m,&n);
	printf("m=%d,n=%d\n",m,n);
	f3(m,n);
	printf("m=%d,n=%d\n",m,n);
	return 0;
}
