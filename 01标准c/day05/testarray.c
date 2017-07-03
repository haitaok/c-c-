#include <stdio.h>

int main(){
	int a[10]={10,20};
	int* p = &a;//不兼容的数据类型
	printf("%d\n",*(p+1));
	
	return 0;
}
