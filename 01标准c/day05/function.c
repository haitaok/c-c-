#include <stdio.h>

int main(){
	int n = Main();
	printf("hello world!\n");
	n+=Main();
	printf("%d\n",n);
	return 0;
}
int Main(){
	printf("你好 世界\n");
	return 10;
}
