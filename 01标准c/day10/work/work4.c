#include <stdio.h>

int main(int argc,char* argv[]){
	if(argc!=2){
		printf("请输入正确的命令:a.out filename\n");
		return 0;
	}
	FILE * fi = fopen(argv[1],"r");
	if(fi==NULL){
		printf("不能打开文件%s\n",argv[1]);
		return 1;
	}
	char s[1000];
	int i=0;
	while(fgets(s,1000,fi)!=NULL){
		//printf("%d.	%s",++i,s);
		char s2[1000]={};
		sprintf(s2,"%d.	%s",++i,s);
		fputs(s2,stdout);
		if(i%20==0){
			getchar();
		}
	}
	fclose(fi);
	return 0;
}
