#include <stdio.h>

int f(int x){
	printf("call f(%d),&x=%p\n",x,&x);
	if(x<=0)
		return 5;
	else{
		int g=f(x-1);
		printf("retrun from f(%d) with %d\n",x-1,g);
		return 2*g+3;
	}
}

int main(){
	printf("%d\n",f(3));
	return 0;
}
