#include <stdio.h>
#include <ctype.h>

int main(){
	printf("请随意输入一些内容:");
	char str[1000];
	double data;
	register int c;
	for(;;){
		c=getchar();
		if(c==EOF)break;
		if(isspace(c)) continue;
		ungetc(c,stdin);
		if(c>='0'&&c<='9'){
			scanf("%lf",&data);
			printf("data=%lf\n",data);
		}else{
			scanf("%s",str);
			printf("str=%s\n",str);
		}
	}
	return 0;
}
