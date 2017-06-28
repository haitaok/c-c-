#include <stdio.h>

int main(){
	char a[4]={'a','b','c','d'};//a是个字符数组但不是字符串
	printf("%s\n",a);//可能会在abcd之后有乱码
	char s[8]={'h','e','l','l','o','\0','w','o'};
	printf("%s\n",s);
	return 0;
}
