#include <stdio.h>

char* weekday(int n)
{
	static char w[7][10]={//直到程序结束，初始化只会执行一次
		"星期日","星期一","星期二","星期三","星期四","星期五","星期六"
	};
	return w[n];
}
int counter(){
	static int cnt;//=0;
	return ++cnt;
}
double d;
int main(){
	printf("%s\n",weekday(5));
	int i=0;
	for(i=0;i<5;i++){
		printf("%d\n",counter());
	}
	printf("d=%lf\n",d);
	return 0;
}
