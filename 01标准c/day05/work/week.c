#include "isdate.h"
#include "day.h"

int week(int year,int month,int date){
	int i=0;
	int sum=0;
	for(i=1900;i<year;i++){
		sum+=day(i,12,31);
	}
	sum+=day(year,month,date);
	return sum%7;
}
