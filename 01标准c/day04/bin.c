#include <stdio.h>

int main(){
	const int bits=sizeof(int)*8;
	unsigned int mask=1<<bits-1;//0x80000000
	int n;
	printf("input an integer:");
	scanf("%d",&n);
	int i;
	for(i=0;i<bits;i++){
		//printf("%c",n&mask?'1':'0');
		//printf("%c",n<0?'1':'0');
		printf("%d",n<0);	
		//mask=mask>>1;
		n=n<<1;
	}
	printf("\n");
	n=-1;
	unsigned uns =n;
	printf("%x,%x\n",uns%2,uns/2);
	return 0;
}
