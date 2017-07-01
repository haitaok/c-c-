#include <stdio.h>

int main(){
	puts(__FILE__);//文件名
	printf("%d\n",__LINE__);//6 行号
	puts(__DATE__);//当前日期
	puts(__TIME__);//当前的时间
	//__STDC__//c语言

	return 0;
}
