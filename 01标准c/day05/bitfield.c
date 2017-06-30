#include <stdio.h>

struct mode{
	unsigned char userread:1;
	unsigned char userwrite:1;
	unsigned char userexecute:1;
	unsigned char groupread:1;
	unsigned char groupwrite:1;
	unsigned char groupexecute:1;
	unsigned char otherread:1;
	unsigned char otherwrite:1;
	unsigned char otherexecute:1;
	unsigned char f3:3;
	unsigned int f10:20;//21
};

int main(){
	struct mode m={1,1,0,1,0,0,1,0,0,6,1000};
	printf("size:%d\n",sizeof(m));
	printf("%d%d%d,%d%d%d,%d%d%d\n",
			m.userread,m.userwrite,m.userexecute,
			m.groupread,m.groupwrite,m.groupexecute,
			m.otherread,m.otherwrite,m.otherexecute);

	printf("%d,%d\n",m.f3,m.f10);
	return 0;
}
