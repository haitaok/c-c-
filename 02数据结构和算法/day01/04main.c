/*
	栈的测试代码
*/
#include <stdio.h>
#include "04stack.h"

int main(){
	init();
	printf("%s",empty()?"空的\n":"非空\n");
	push(4);
	push(5);
	push(6);
	printf("有效数据个数是%d\n",size());
	printf("最后一个数字是%d\n",last());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf(empty()?"空的\n":"非空\n");
	deinit();
	return 0;
}
