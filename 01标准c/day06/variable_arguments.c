#include <stdio.h>
#include <stdarg.h>

int max(int cnt,...){
	va_list v;//保存可变长参数表，va_list是个类型 地址类型
	va_start(v,cnt);//用v保存参数cnt之后的那些参数表
	int i;
	int maxvalue=va_arg(v,int);//从参数表中取出一个int类型的参数
	for(i=1;i<cnt;i++){
		int data = va_arg(v,int);
		if(data>maxvalue){
			maxvalue=data;
		}
	}
	va_end(v);	//释放可变长参数表v
	return maxvalue;
}
void printchar(int cnt,...){//通过‘...’传递时‘char’被提升为‘int’
	va_list v;
	va_start(v,cnt);
	int i;
	for(i=0;i<cnt;i++){
		printf("%c",va_arg(v,int));//char 传int short提升成int float提升double
	}
	printf("\n");
	va_end(v);
}
void printstring(int cnt,...){//打印字符串
	va_list v;
	va_start(v,cnt);
	int i;
	for(i=0;i<cnt;i++){
		printf("%s\n",va_arg(v,char*));//传char*
	}
	va_end(v);
}

int main(){
	printf("%d\n",max(2,88,69));
	printf("%d\n",max(5,91,25,86,97,89));
	printf("%d\n",max(4,91,25,86,89));
	printchar(3,'A','B','C');
	printstring(3,"hello","my","dear");
	return 0;
}
