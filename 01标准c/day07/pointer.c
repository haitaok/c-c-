#include <stdio.h>

int main(){
	char x[9]={'a','b','c','d','e','f','g','h'};
	puts(x);
	char* p1 =&x[0];//char *
	char* p2=&x[2];
	printf("%c\n",*p1);
	*p1='A';
	*p2='C';
	puts(x);
	int* p3=(int*)&x[0];//char*
	printf("%x\n",*p3);
	
	return 0;
}
