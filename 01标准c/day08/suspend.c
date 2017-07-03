#include <stdio.h>

char* func(){
	char a='#';
	return &a;//不要返回普通局部变量的地址！
}

int main(){
	char c='@';
	char* p=&c;
	*p='$';
	printf("c=%c\n",c);
	printf("*p=%c\n",*p);
	p = func();//指向可能已经释放的地方，悬空指针
	printf("c=%c\n",c);
	printf("*p=%c\n",*p);//输出可能不是‘#’了
	return 0;
}
