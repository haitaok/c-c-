#include <stdio.h>

int main(){
	
	FILE* fp=fopen("file","r+");
	if(fp==NULL){
		printf("无法打开文件file\n");
		return 1;
	}
	int c;
	while((c=fgetc(fp))!=EOF){
		printf("%c",c);
		fputc(c,fp);
	}
	putchar('\n');
	fclose(fp);
	return 0;
}
