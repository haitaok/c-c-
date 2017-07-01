#include <stdio.h>
#define SWAP(T,x,y){T t=x;x=y;y=t;}
#define MAX(x,y) (x<y?y:x)
#define PI 3.14159
#define AREA(r) PI*(r)*(r)
#define STR(x) puts(#x)
void welcomestudent(){
	STR(欢迎各位同学);
}
void welcometeacher(){
	printf("欢迎各位老师\n");
}
#define wel(who) welcome##who()
int main()
{
	int a=10,b=20;
	double c=12.3,d=45.6;
	int e=50,f=60;
	SWAP(int,a,b)
	SWAP(double,c,d)
	printf("a=%d,b=%d\n",a,b);
	printf("c=%g,d=%g\n",c,d);
	printf("%d\n",MAX(a,b)+MAX(c,d));
	printf("%g\n",AREA(a+b));
	printf("%d\n",MAX(++a,++b));
	STR(hello);
	wel(student);
	wel(teacher);
	return 0;
}
