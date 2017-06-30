#include <stdio.h>
typedef union IP{
	int i;
	char a[4];	
	double d;
}IP;

int main(){
	IP me={4};
	printf("%d\n",me.i);
	return 0;
}	
