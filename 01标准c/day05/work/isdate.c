#include "isdate.h"
#include "day.h"
bool isrunyear(int year){
	return year%4==0&&year%100!=0||year%400==0;
}
bool isdate(int year,int month,int date){
	int days= month2day(year,month);
	return date>0&&date<=days;
}

int month2day(int year,int month){
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if(isrunyear(year)){
				return 29;
			}else{
				return 28;			
			}
		default:
			return 0;

	}
}

