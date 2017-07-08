#include <stdio.h>

int main(int argc,char* argv[]){
	if(argc!=2){
		printf("请输入正确的命令,a.out filename\n");
		return 0;
	}
	FILE * fi=fopen(argv[1],"r");
	if(fi==NULL){
		printf("打开文件%s失败\n",argv[1]);
		return 1;
	}
	int c;
	int cnum=0;
	int nnum=0;
	int onum=0;
	while((c=fgetc(fi))!=EOF){
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
			cnum++;
		}else if(c>='0'&&c<='9'){
			nnum++;
		}else{
			onum++;
		}
	}
	printf("字符型:%d,数字型:%d,其他类型:%d\n",cnum,nnum,onum);
	return 0;
}
