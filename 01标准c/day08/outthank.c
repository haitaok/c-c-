//支持命令行， a.out zhangsna lisi

#include <stdio.h>
#include <string.h>

int main(int argc,char * argv[]){
	int i=0;
	if(argc==1){
		printf("没有带要感谢的人名\n");
		return 0;
	}
	if(strcmp(argv[0],"./thanks")!=0){
		printf("请使用正版!\n");
		return 1;
	}
	for(i=1;i<argc;i++){
		printf("感谢你:%s\n",argv[i]);
	}
	return 0;
}
