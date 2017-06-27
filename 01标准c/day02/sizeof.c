#include <stdio.h>

int main(){
	int n=10;
	printf("%i\n",sizeof(int));
	printf("%i\n",sizeof(n));
	printf("***%i\n",sizeof(n+5));
	printf("%i\n",sizeof(n+5.5));
	printf("%i\n",sizeof(n=123));
	printf("n=%i\n",n);
	return 0;
}
