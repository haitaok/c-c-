#include <stdio.h>
//预处理在编译之前作 gcc -E const.c >aaa.i
//gcc aaa.i//编译
#define CLASS "csd1007"
#define DATE 20100730
#define AA PI*
#define BB 10+student_num
int main(){
	const double PI=3.14;
	int const student_num=40;
	printf("PI=%g,student_num=%d\n",PI,student_num);
	//PI=3.15;//可能会出现编译错误或者警告
	printf("%s,%d\n",CLASS,DATE);
	printf("%g\n",AA BB);
	const double aa=PI;
	const int bb = 10+student_num;
	printf("%g\n",aa*bb);
	return 0;
}
