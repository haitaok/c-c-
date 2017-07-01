#include <stdio.h>

void decbit(int n)
{
	if(n>9){
		decbit(n/10);
	}
	printf(" %d",n%10);
}

int main(){
	decbit(53926);
	printf("\n");
	return 0;
}
