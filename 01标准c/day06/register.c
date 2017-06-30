#include <stdio.h>

int main(){
	register int i=100;
	i=i+80;
	printf("%d\n",i);
	//printf("%p\n",&i);//对寄存器取地址是个错误
	return 0;
}
