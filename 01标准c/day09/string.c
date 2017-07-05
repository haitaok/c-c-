#include <stdio.h>
//sscanf,sprintf
int main(){
	char buf[100];
	sprintf(buf,"hello,i'm %s,today is %d-%d-%d","芙蓉",2010,8,13);
	puts(buf);
	int age;
	char name[20];
	double salary;
	const char* str="20 furong 20000";
	sscanf(str,"%d%s%lf",&age,&name,&salary);
	printf("我是%s,今年%d,月新%g\n",name,age,salary);
	return 0;
}
