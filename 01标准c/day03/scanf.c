#include <stdio.h>

/*
%c字符
%d,%x,%o:十进制，十六进制，八进制整数
%ld,%hd:long int ,short int
%f:float
%lf:double
%s:字符串
*/
int main(){
	int n;
	float f=0;
	double d=0;
	char c=0;//'\0'
	printf("请输入一个整数和一个小数：");
	scanf("%d%f",&n,&f);
	printf("%d,%g\n",n,f);
	printf("请输入一个小数：");
	scanf("%f",&d);//类型不匹配 只需要站位符 不要有\n 需要非空白字符
	printf("%g\n",d);
	printf("请输入一个小数：");
	scanf("%lf",&d);
	printf("%g\n",d);
	printf("请输入一个字符：");
	scanf(" %c",&c);
	printf("c=[%c](%d)\n",c,c);
	printf("请输入两个小数,(用逗号分隔)：");
	//输入时要原样输入 1.2,3.4 返回成功的输入数
	printf("成功项数:%d\n",scanf("%f,%lf",&f,&d))
	printf("f=%g,d=%g\n",f,d);
	return 0;
}
