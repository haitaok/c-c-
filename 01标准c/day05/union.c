#include <stdio.h>
typedef union IP{
	char i4[4];
	int net;
	double d;
}IP;

int main(){
	printf("size:%d\n",sizeof(IP));
	IP me={192,168,0,20};
	printf("%x\n",me.net);
	me.net=0x12345678;
	int i;	
	for(i=0;i<4;i++){
		printf("%d ",me.i4[i]);
	}
	printf("\n");
	return 0;
}
