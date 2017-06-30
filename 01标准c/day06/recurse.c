#include <stdio.h>

int f(int x){
	if(x<=0)
		return 5;
	else
		return 2*f(x-1)+3;
}

int main(){
	printf("%d\n",f(3));
	return 0;
}
