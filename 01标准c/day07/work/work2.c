#include <stdio.h>

#define HIBYTE(n) ((n)&0x0000ff00)>>8
#define LOBYTE(n) (n)&0x000000ff
#define HIWORD(n) ((n)&0xffff0000)>>16
#define LOWORD(n) (n)&0x0000ffff

int main(){
	short a=0x3322;
	printf("%x\n",HIBYTE(a));
	printf("%x\n",LOBYTE(a));
	int b=0x22334455;
	printf("%x\n",HIWORD(b));
	printf("%x\n",LOWORD(b));
	return 0;	
}
