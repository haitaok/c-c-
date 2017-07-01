#include <stdio.h>

#define INT(c1,c2,c3,c4) ((c1-'0'<<24)+(c2-'0'<<16)+(c3-'0'<<8)+(c4-'0'))

int main(){
	printf("%x\n",INT('1','2','3','4'));
	return 0;
}
