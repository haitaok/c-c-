#include "isdate.h"

int day(int year,int month,int date){
	int i=0,sum=0;	
	for(i=1;i<month;i++){
		sum+=month2day(year,i);
	}
	return sum+date;
}
