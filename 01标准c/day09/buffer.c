#include <stdio.h>

int main(){
	printf("我爱芙蓉");
	fflush(stdout);//刷新标准输出 把缓冲区的数据放到屏幕上
	printf("hello");
	sleep(10);//window 里不能用这个函数
	printf("world");
	return 0;
}
