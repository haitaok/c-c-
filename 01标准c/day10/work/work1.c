#include <stdio.h>


int main(int argc,char* argv[]){
	if(argc!=3){
		printf("输入有误，请输入 a.out filename copyname\n");
		return 0;
	}
	FILE* fi = fopen(argv[1],"r");
	if(fi==NULL){
		printf("不能打开文件%s\n",argv[1]);
		return 1;
	}
	FILE* fo=fopen(argv[2],"w");
	if(fo==NULL){
		printf("不能打开文件%s\n",argv[2]);
		return 2;
	}
	char s[1000];
	while(fread(s,sizeof(char),1000,fi)!=0){
		fwrite(s,sizeof(char),1000,fo);
	}	
	fclose(fi);
	fclose(fo);
	return 0;
}
