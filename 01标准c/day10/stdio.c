#include <stdio.h>

int main(){
	int n;
	double d;
	char str[100];
	fprintf(stderr,"请输入姓名，年龄和体重：");//stdout
	sleep(5);//上边不输出
	fscanf(stdin,"%s%d%lf",str,&n,&d);
	fprintf(stdout,"%s : %d岁,%g公斤\n",str,n,d);
	return 0;
}
