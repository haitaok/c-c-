#include <stdio.h>

int main(){
	printf("我们这里有如下课程:\n");
	printf("1--C++\n");
	printf("2--嵌入式\n");
	printf("3--java\n");
	printf("您想学那一门呢？");
	char ch;
	scanf(" %c",&ch);
	switch(ch){
		case '1':
			printf("学会C++，有饭吃\n");
			break;
		case '2':
			printf("嵌入式有肉吃\n");
			break;
		case '3':
			printf("学java，吃香的喝辣的\n");
			break;
		default:
			printf("其他的没有意思\n");
			break;
			
	}
	return 0;
}
