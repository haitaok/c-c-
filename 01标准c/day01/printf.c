#include <stdio.h>
/*
%i/%d:int
%hd/%ld:short int /long int
%u:unsigned int
%x/%o:十六进制/八进制
%f/%lf:flat/double
%g:float/double去掉了尾随的0
%c:char
%s:"string"
%p:address指针

*/
int main(){
	printf("hello,data\n");
	printf("aaa%ibbb%fccc%cddd\n",123,45.6,'$');
	printf("十六进制%x,八进制%o\n",763,763);
	printf("%g\n",45.6);
	return 0;
}
