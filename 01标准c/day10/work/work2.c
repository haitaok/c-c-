#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){
	if(argc!=3){
		printf("请输入正确的参数,a.out filename\n");
		return 0;
	}
	FILE* fi = fopen(argv[1],"r+");
	if(fi==NULL){
		printf("文件%s打开失败\n",argv[1]);
		return 1;
	}
	if(strcmp("encode",argv[2])==0){
		int c;
		while((c=fgetc(fi))!=EOF){
			ungetc(c,fi);
			c=c+1;
			fputc(c,fi);
		}
		
	}else{
		int c;
		while((c=fgetc(fi))!=EOF){
			ungetc(c,fi);
			c=c-1;
			fputc(c,fi);
		}
	}
	fclose(fi);
	return 0;
}
