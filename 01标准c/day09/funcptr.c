#include <stdio.h>

int main(int argc,char* argv[]){
	if(argc<1) return 0;
	int *f(char);//f是一个函数，形参char类型，返回int*类型
	int (*p)(char);//p是一个指针，指向一个形参char返回int的函数
	int(*q)();//q是一个指针，指向一个形参任意返回int的函数
	printf("&main=%p,main=%p\n",&main,main);
	//p=&main;//类型不一致
	//q=&main;
	q=main;
	int n=0;
	int* m=&n; 
	//(*q)(argc-1,argv);
	q(argc-1,argv);
	return 0;
}
