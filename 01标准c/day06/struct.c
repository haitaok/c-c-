#include <stdio.h>

typedef struct date{
	int year;
	int month;
	int day;
}date;
int date2int(date d)
{
	return d.year*10000+d.month*100+d.day;
}
date int2date(int n){
	date d;
	d.day=n%100;
	d.year=n/10000;
	d.month=n/100%100;
	return d;
}
date input(void){
	date d;
	printf("d of function input:%p\n",&d);
	printf("请输入年月日:");
	scanf("%d%d%d",&d.year,&d.month,&d.day);
	return d;
}
void print(date d){
	printf("%d-%d-%d\n",d.year,d.month,d.day);
}

int main()
{
	date d={2010,8,10};
	printf("d of function main:%p\n",&d);
	print(d);
	d = input(d,"hello",123,888.999);
	print(d);
	int n = date2int(d);
	printf("%d\n",n);
	print(int2date(n));
	return 0;
}
