#include <stdio.h>

int main()
{
	char c;
	int n;
	char* pc;
	int* pn;
	short s;
	short* ps;
	double d=1.23,e=4.567;
	double* pd=&d;//pp是一个指向double*变量的指针
	double** pp=&pd;
	printf("&c =%p\n",&c);
	printf("&pc=%p\n",&pc);
	printf("&n =%p\n",&pn);
	printf("&c =%p\n",&s);
	printf("&ps=%p\n",&ps);
	printf("&d =%p\n",&d);
	printf("&pd=%p\n",&pd);
	printf("&pp=%p\n",&pp);
	*pp=&e;//*pp就是pd
	printf("%g\n",*pd);
	return 0;
}
