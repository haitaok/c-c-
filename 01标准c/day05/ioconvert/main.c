#include <stdio.h>
#include "check.h"
#include "convert.h"
int main(){
	char c;
	printf("请输入一行文字:\n");
	do{
		scanf("%c",&c);
		if(isLower(c)){
			printf("%c",toUpper(c));
		}else if(isNum(c)){
			toChinese(c);
			//printf("%s",toChinese(c));
		}else{
			printf("%c",c);
		}
	}while(c!='\n');
	return 0;
}
