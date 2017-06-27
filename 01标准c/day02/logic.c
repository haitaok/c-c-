#include <stdio.h>

int main(){
	int a=3,b=5;
	printf("%d,%d,%d\n",a<=b,a>=b,a>=3);
	a=-3;
	printf("%d,%d\n",a>=0&&a<=100,0<=a<=100);
	printf("%d,%d\n",a<0||a>100,b<0||b>100);
	int y=2010;
	printf("%d\n",!(y%4==0&&y%100!=0||y%400==0));
	return 0;
}

