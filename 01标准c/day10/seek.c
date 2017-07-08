#include <stdio.h>

int main(){
	FILE* fp=fopen("file","r+");
	if(fp==NULL){
		printf("无法打开文件file\n");
		return 1;
	}
	fseek(fp,9,SEEK_SET);
	char c10,c20;
	c10=getc(fp);
	fseek(fp,9,SEEK_CUR);
	c20=getc(fp);
	fseek(fp,-11,SEEK_CUR);
	putc(c20,fp);
	fseek(fp,-8,SEEK_END);
	putc(c10,fp);
	fclose(fp);
	return 0;
}
