#include <stdio.h>

void clear();//函数声明

int main(){
	char name[20];
	char gender;
	printf("请输入姓名:");
	scanf("%s",name);
	clear();//函数调用
	printf("请输入性别（M/F）：");
	scanf(" %c",&gender);
	printf("%s:%c\n",name,gender);
	return 0;
}
void clear(){//函数体 函数定义
	scanf("%*[^\n]");
	scanf("%*c");
}

