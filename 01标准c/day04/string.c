#include <stdio.h>

int main(){
	char a[4]={'a','b','c','d'};//a是个字符数组但不是字符串
	printf("%s\n",a);//可能会在abcd之后有乱码
	char s[8]={'h','e','l','l','o','\0','w','o'};
	printf("%s\n",s);
	printf("%s\n",s+2);
	printf("%s\n",s+6);//wo后面可能会有乱码
	char str[100];
	printf("请输入一个字符串:");
	scanf("%s",str);
	//{
	//	char c;
	//	do{
	//		scanf("%c",&c);
	//	}while(c!='\n');
	//}
	scanf("%*[^\n]");//清空输入缓冲区
	scanf("%*c");
	printf("%s\n",str);
	printf("请输入一行文字：\n");	
	gets(str);//读取一行字符作为一个字符串
	printf("%s\n",str);
	puts(str);
	printf(str);//输入内容中有格式占位符就会有问题
	return 0;
}
