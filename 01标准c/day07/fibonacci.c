#include <stdio.h>

int fib(int n){
	if(n==1||n==2){
		return 1;
	}else{
		return fib(n-1)+fib(n-2);
	}
}

int main(){
	printf("%d\n",fib(6));
	return 0;
}
