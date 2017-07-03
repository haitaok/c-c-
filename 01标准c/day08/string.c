#include <stdio.h>
#include <string.h>

int main(){
	char a[100]={'h','e','\0','w','o'};
	//"csd1007"//const char[8];
	puts(a);
	puts("csd1007");
	char* p=a;
	printf("%c\n",*p);
	*p='w';
	puts(a);
	p="csd1007";//有的编译器可能会出警告，只读存储区字符数组
	printf("%c\n",*p);
	//*p='w';//编译通过，运行段错误
	const char* q=NULL;//表示字符常量 约定 不会修改所指的数据
	//char const* q=NULL;//这个写法跟上一行等价
	q="csd1007";//一定是安全的
	//*q='w';//编译时就能检查出错误来
	p=a;
	strcpy(a,"NB");
	puts(p);
	q=a+3;
	puts(q);
	char*const r=a+1;//r是只读 只能初始化
	puts(r);	
	//r=a;//编译错误
	*r='A';
	puts(a);
	//char *str;
	//scanf("%s",str);//赋值给未知地址中
	//strcpy(str,"hello");//copy到未知地址中
	return 0;
}
