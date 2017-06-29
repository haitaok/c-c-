#include <stdio.h>
#include <string.h>

typedef enum gender{
	MALE,
	FEMALE
} gender;
typedef struct person{
	char name[20];
	gender s;
	int age;
	double income;//成员memeber
} person;
typedef char A[20];//给char[20]类型起别名A
int main()
{
	//A str="good";//str的类型是char[20]
	//puts(str);
	person a;
	person b={
		"陈宗权",MALE,80,8005
	};
	printf("%s是以位年方%d的%s，月新%g\n",b.name,b.age,b.s==MALE?"男士":"女士",b.income);
	person c={
		"芙蓉",MALE,80,9876.5
	};
	printf("%s是以位年方%d的%s，月新%g\n",c.name,c.age,c.s==MALE?"男士":"女士",c.income);
	person d=c;
	printf("%&c=%p,&d=%p\n",&c,&d);
	a=b;
	a.age=20;
	strcpy(a.name,"权哥");//不能用a.name=...
	printf("%s是以位年方%d的%s，月新%g\n",a.name,a.age,a.s==MALE?"男士":"女士",a.income);
	printf("-------------------------\n");	
	person p[5]={
		a,
		b,
		c,
		d,
		{"杨强",MALE,25,10000}
	};
	int i;
	for(i=0;i<5;i++){
		printf("%s是以位年方%d的%s，月新%g\n",p[i].name,p[i].age,p[i].s==MALE?"男士":"女士",p[i].income);
	}
	printf("请输入姓名、性别（M/F）、年龄、收入:\n");
	char s;
	scanf("%s %c%d%lf",a.name,&s,&a.age,&a.income);
	a.s=(s=='M'||s=='m')?MALE:FEMALE;
	printf("%s是以位年方%d的%s，月新%g\n",a.name,a.age,a.s==MALE?"男士":"女士",a.income);
	return 0;
}
