#include <stdio.h>

enum bool{
	true=1,
	false=0
};
enum mode{
	UREAD=0400,UWRITE=0400,UEXEC=0100,
	GRIED=040,GWRITE=020,GEXEC=010,
	OREAD=0002,OWRITE=0001,OEXEC=0000
};
enum course{CPP,JAVA,DOTNET,TEST};
int main(){
	printf("%d\n",true);
	printf("%d,%d,%d,%d\n",CPP,JAVA,DOTNET,TEST);
	printf("%d--C++\n",CPP);
	printf("%d--JAVA\n",JAVA);
	printf("%d--.NET\n",DOTNET);
	printf("%d--测试\n",TEST);
	printf("请选择：");
	int n;
	scanf("%d",&n);
	switch(n){
		case CPP:puts("C++课程");break;
		case JAVA:puts("JAVA课程");break;
		case DOTNET:puts("测试课程");break;
		case TEST:puts(".NET课程");break;
		default:puts("无效");break;
	}
	enum bool a;
	typedef enum bool BL;
	BL b;
	b=false;
	a=true;
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
