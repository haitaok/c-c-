#include <stdio.h>

int main(){
	int a[10]={10,20};
	int* p = &a;
	printf("%d\n",*(p+1));
	
	return 0;
}
