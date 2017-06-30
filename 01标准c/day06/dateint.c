#include <stdio.h>
typedef struct date{
	int year;
	int month;
	int day;
}date;

int date2int(date d){
	int i=0;
	i=d.year*10000;
	i+=d.month*100;
	i+=d.day;
	return i;
}

date int2date(int n){
	date d;
	d.year=n/10000;
	int m = n%10000;
	d.month=m/100;
	m=n%100;
	d.day=m;
	return d;
}



int main(){
	date d={2008,8,8};
	int id = date2int(d);
	printf("%d\n",id);
	date b = int2date(id);
	printf("%d-%d-%d\n",b.year,b.month,b.day);	
	
	return 0;
}
