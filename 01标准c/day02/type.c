#include <stdio.h>

int main(){
	int n = 12345.6;
	double d=1.5e30;
	printf("n=%d\n",n);
	printf("n=%f\n",n);
	n=(int)1.4e30;
	printf("n=%d\n",n);
	printf("n=%x\n",n);
	printf("n=%d\n",(int)d);
	printf("n=%g\n",d);
	return 0;
}
