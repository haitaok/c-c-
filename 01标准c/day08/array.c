#include <stdio.h>

void show(double a[],int n){//a是披着数组皮的指针
	double x=123.45;
	printf("sizeof a=%d\n",sizeof(a));
	a=&x;
	printf("*a=%g\n",*a);
}
void print(double *p,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%g ",p[i]);
	}
	printf("\n");
}


int main(){
	double a[5]={1.1,2.2,3.3,4.4,5.5};
	show(a,5);
	printf("%d\n",sizeof(a));
	return 0;
}
