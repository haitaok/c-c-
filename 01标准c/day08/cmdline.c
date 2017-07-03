#include <stdio.h>

int main(int argc,char* argv[]){//argc 字符串的个数 argv 保存字符串地址，每个字符串的开始地址
	printf("argc=%d\n",argc);
	int i;
	for(i=0;i<argc;i++){
		printf("%d:%s\n",i,argv[i]);
	}
	//注意命令行都是字符串，即使数字也是“12”，“34”。
	return 0;
}
