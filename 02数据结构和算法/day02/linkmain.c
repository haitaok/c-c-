/*
	队列测试演示
*/
#include <stdio.h>
#include "linkqueue.h"
int main(){
	init();
	printf(empty()?"空的\n":"不空\n");
	push(1);
	push(2);
	push(3);
	printf("下一个数字%d\n",front());
	printf("数据个数是%d\n",size());
	//printf("%d %d %d\n",pop(),pop(),pop());
	printf("%d ",pop());
	printf("%d ",pop());
	printf("%d\n",pop());
	printf(empty()?"空的\n":"不空\n");
	push(4);
	push(5);
	push(6);
	push(7);
	push(8);
	push(9);
	push(10);
	printf(full()?"满的\n":"不满\n");
	deinit();
	return 0;
}
