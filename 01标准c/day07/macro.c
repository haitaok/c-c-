#include <stdio.h>

#define P printf(
#define H "hello\n");

#define I \
	int n;\
	printf("请输入一个整数:");\
	scanf("%d",&n);\
	printf("您输入的%d的一半\n",n+n);
#define MA int main(){
#define END return 0;}
#define W "wahaha "
#ifndef H 
	#define H "您好!\n");
#else
	#define __H H
	#undef H //取消对某个变量的定义
	#define H "***\n");
#endif
MA P W H I END
