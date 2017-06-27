#include <stdio.h>

int main(){
	int a,b,c,d;
	a=b=c=d=0;
	a++;++b;
	printf("%d,%d\n",a,b);
	a+8;
	printf("%d**********\n",a);//1
	printf("%d,%d\n",c++/*后++*/,++d/*前++*/);
	return 0;
}
