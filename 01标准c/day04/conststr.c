#include <stdio.h>
#include <string.h>

int main(){
	char a[100]="hello world!";
	printf("%d\n",sizeof("hello world!"));
	printf("%c\n","csd1007"[2]);
	printf("%s\n","csd1007"+3);
	strcpy(a,"good afternoon!");
	puts(a);
	strcat(a,"dear friends!");
	puts(a);
	printf("%d,%d\n",sizeof(a),strlen(a));
	strchr(a,'f');//带回找到字符的地址，没有找到null
	printf("%s\n",strchr(a,'f'));
	//printf("%s\n",strchr(a,'k'));//null地址，会出段错误
	printf("%s\n",strrchr(a,'f'));//从右向左找
	printf("%s\n",strstr(a,"ear"));//查找子串
	char b[]="hello";
	printf("%p,%p\n",b,"hello");
	if(strcmp(b,"hello")==0){//不等 “hello”首地址 两个字符数组，
		printf("相等\n");
	}else{
		printf("不等\n");
	}
	"hello"[0]='H';//编译错误 向只读位置赋值
	return 0;
}
