#include <stdio.h>

int main(){
	printf("%d,%d,%d\n",~20,~-1,~0);
	unsigned int n=-1;
	printf("%u,%x,%d\n",n,n,n);
	int m=-1;
	printf("%x,%x\n",n>>3,m>>3);
	printf("%x,%x\n",n,m);
	printf("%x,%x\n",n<<3,m<<3);
	m=200;
	printf("%d,%d\n",m<<3,m>>3);
	printf("%d,%d\n",m<<30,m>>30);//超范围 0
	m=0x3862517b;
	printf("%x\n",(char)m);
	printf("%x\n",(char)(m>>16));
	int a=0x12,b=0x34,c=0x56,d=0x78;
	printf("%x\n",(a<<24)|(b<<16)|(c<<8)|d);
	return 0;
}
