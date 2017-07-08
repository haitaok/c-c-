#include <stdio.h>
#include <string.h>

int main(){
	char buf[1000];
	printf("请输入一行文字:\n");
	//gets(buf);
	//scanf("%[^\n]%*c",buf);
	fgets(buf,sizeof(buf),stdin);
	buf[strlen(buf)-1]='\0';//去掉末尾的换行符
	puts(buf);
	printf("%s\n",buf);
	fputs(buf,stdout);
	return 0;
}
